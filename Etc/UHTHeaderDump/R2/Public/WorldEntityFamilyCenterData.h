#pragma once
#include "CoreMinimal.h"
#include "WorldEntityFamilyCenterData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityFamilyCenterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerTownHallId;
    
    R2_API FWorldEntityFamilyCenterData();
};

