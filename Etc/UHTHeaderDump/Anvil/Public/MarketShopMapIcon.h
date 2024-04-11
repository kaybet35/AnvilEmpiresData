#pragma once
#include "CoreMinimal.h"
#include "MapIcon.h"
#include "Templates/SubclassOf.h"
#include "MarketShopMapIcon.generated.h"

class UMarketShopMapTooltip;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMarketShopMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMarketShopMapTooltip> TooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarketShopMapTooltip* CachedTooltip;
    
public:
    UMarketShopMapIcon();

};

