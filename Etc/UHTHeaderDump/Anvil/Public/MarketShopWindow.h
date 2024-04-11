#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "StructureWindow.h"
#include "MarketShopWindow.generated.h"

class UMarketItemGridWidget;
class UStatusWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMarketShopWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarketItemGridWidget* MarketItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* SilverStatus;
    
public:
    UMarketShopWindow();

private:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetSilverAmountVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetSilverAmountText();
    
};

