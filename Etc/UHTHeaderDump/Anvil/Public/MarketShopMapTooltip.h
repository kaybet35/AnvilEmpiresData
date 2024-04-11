#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "MarketShopMapTooltip.generated.h"

class UHeaderContainer;
class UMarketShopMapTooltipRow;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMarketShopMapTooltip : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* HeaderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* MarketItemRowsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMarketShopMapTooltipRow> MarketTooltipRowType;
    
public:
    UMarketShopMapTooltip();

};

