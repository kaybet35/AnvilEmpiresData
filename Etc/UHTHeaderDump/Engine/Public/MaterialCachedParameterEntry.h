#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
#include "MaterialCachedParameterEntry.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCachedParameterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMaterialParameterInfo> ParameterInfoSet;
    
    ENGINE_API FMaterialCachedParameterEntry();
};

