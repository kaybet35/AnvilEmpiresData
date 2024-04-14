#pragma once
#include "CoreMinimal.h"
#include "WorldEntityBeaconTowerData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityBeaconTowerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TowerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    R2_API FWorldEntityBeaconTowerData();
};

