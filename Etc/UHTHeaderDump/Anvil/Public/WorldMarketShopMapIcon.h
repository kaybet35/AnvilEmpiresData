#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WorldEntityMapIcon.h"
#include "WorldMarketShopMapIcon.generated.h"

class UButton;
class UCentralMarketplaceMapTooltip;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWorldMarketShopMapIcon : public UWorldEntityMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCentralMarketplaceMapTooltip> CentralMarketplaceTooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MapItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceMapTooltip* CachedCentralMarketplaceTooltip;
    
public:
    UWorldMarketShopMapIcon();

private:
    UFUNCTION(BlueprintCallable)
    void OnIconClicked();
    
};

