#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "MapWidgetBase.h"
#include "MapWidget.generated.h"

class UAnvilButtonWidget;
class UBorder;
class UMapIcon;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapWidget : public UMapWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EnemyIconColour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FogOfWarMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FogOfWarRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* DeploymentInstructionOrSpawnTimerBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DeploymentInstructionOrSpawnTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ObjectiveBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LogoutButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapIcon*> DisplayedBeaconTowerPlayerInfos;
    
public:
    UMapWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnLogoutButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetRespawnTimerVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetRespawnTimerText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetObjectiveBorderVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetLogoutButtonVisibility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMapImageSet(UTexture2D* MapImageTexture);
    
};

