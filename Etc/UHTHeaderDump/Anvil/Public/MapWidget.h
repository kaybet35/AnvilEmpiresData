#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "MapWidgetBase.h"
#include "MapWidget.generated.h"

class UBorder;
class UCentralMarketplaceWidget;
class UMapIcon;
class UMapPostContainerWidget;
class UWinConditionWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapWidget : public UMapWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EnemyIconColour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* CentralMarketplaceWidgetBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceWidget* CentralMarketplaceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapPostContainerWidget* MapPostContainerWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWinConditionWidget* WinConditionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapIcon*> DisplayedBeaconTowerPlayerInfos;
    
public:
    UMapWidget();

};

