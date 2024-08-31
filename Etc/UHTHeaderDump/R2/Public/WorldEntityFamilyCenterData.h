#pragma once
#include "CoreMinimal.h"
#include "BasicItemAndPayloadCount.h"
#include "WorldEntityFamilyCenterData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityFamilyCenterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FamilyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemAndPayloadCount> StoredFoodCounts;
    
    R2_API FWorldEntityFamilyCenterData();
};

