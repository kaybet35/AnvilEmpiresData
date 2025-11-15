#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EHorizTextAligment.h"
#include "EVerticalTextAligment.h"
#include "PrimitiveComponent.h"
#include "TextRenderComponent.generated.h"

class UFont;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UTextRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TextMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizTextAligment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalTextAligment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TextRenderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvDefaultSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizSpacingAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VertSpacingAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysRenderAsText: 1;
    
    UTextRenderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetYScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetXScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVertSpacingAdjust(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextRenderColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizSpacingAdjust(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(UFont* Value);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTextWorldSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTextLocalSize() const;
    
};

