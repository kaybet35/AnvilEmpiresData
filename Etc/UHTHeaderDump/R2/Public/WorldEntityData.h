#pragma once
#include "CoreMinimal.h"
#include "EAnvilWorldEntityType.h"
#include "WorldEntityBeaconTowerData.h"
#include "WorldEntityCentralMarketplaceData.h"
#include "WorldEntityFamilyCenterData.h"
#include "WorldEntityTempleData.h"
#include "WorldEntityTownHallData.h"
#include "WorldEntityWildSpawnData.h"
#include "WorldEntityData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilWorldEntityType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityWildSpawnData WildSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityTownHallData TownHallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityBeaconTowerData BeaconTowerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityFamilyCenterData FamilyCenterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityCentralMarketplaceData CentralMarketplaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityTempleData TempleData;
    
    R2_API FWorldEntityData();
};

