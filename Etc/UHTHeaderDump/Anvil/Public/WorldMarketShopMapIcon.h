#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WorldEntityMapIcon.h"
#include "WorldMarketShopMapIcon.generated.h"

class UMarketShopMapTooltip;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWorldMarketShopMapIcon : public UWorldEntityMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMarketShopMapTooltip> MarketShopTooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarketShopMapTooltip* CachedMarketShopTooltip;
    
public:
    UWorldMarketShopMapIcon();

};

