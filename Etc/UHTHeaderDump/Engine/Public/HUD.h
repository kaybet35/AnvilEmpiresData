#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Actor.h"
#include "DebugTextInfo.h"
#include "EBlendMode.h"
#include "Templates/SubclassOf.h"
#include "HUD.generated.h"

class APawn;
class APlayerController;
class UCanvas;
class UFont;
class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class ENGINE_API AHUD : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLostFocusPaused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowHitBoxDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowOverlays: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebugTextShadow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PostRenderedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FName> ToggledDebugCategories;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvas* Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvas* DebugCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugTextInfo> DebugTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ShowDebugTargetDesiredClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShowDebugTargetActor;
    
public:
    AHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void ShowHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugToggleSubCategory(FName Category);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugForReticleTargetToggle(TSubclassOf<AActor> DesiredClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebug(FName DebugType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoveAllDebugStrings();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxRelease(const FName BoxName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxEndCursorOver(const FName BoxName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxClick(const FName BoxName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector Project(FVector Location, bool bClampToZeroPlane) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreviousDebugTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextDebugTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTextSize(const FString& Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawText(const FString& Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintCallable)
    void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddDebugText(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);
    
};

