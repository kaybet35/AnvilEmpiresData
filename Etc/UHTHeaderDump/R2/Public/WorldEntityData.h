#pragma once
#include "CoreMinimal.h"
#include "EAnvilWorldEntityType.h"
#include "WorldEntityBeaconTowerData.h"
#include "WorldEntityTownHallData.h"
#include "WorldEntityData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilWorldEntityType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityTownHallData TownHallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEntityBeaconTowerData BeaconTowerData;
    
    R2_API FWorldEntityData();
};

