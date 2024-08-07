#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "MapWidgetBase.h"
#include "MapWidget.generated.h"

class UBorder;
class UCentralMarketplaceWidget;
class UMapIcon;
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
    UBorder* ObjectiveBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* CentralMarketplaceWidgetBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceWidget* CentralMarketplaceWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapIcon*> DisplayedBeaconTowerPlayerInfos;
    
public:
    UMapWidget();

private:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetObjectiveBorderVisibility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMapImageSet(UTexture2D* MapImageTexture);
    
};

