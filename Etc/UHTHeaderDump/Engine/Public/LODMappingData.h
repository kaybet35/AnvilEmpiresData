#pragma once
#include "CoreMinimal.h"
#include "LODMappingData.generated.h"

USTRUCT(BlueprintType)
struct FLODMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Mapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> InverseMapping;
    
    ENGINE_API FLODMappingData();
};

