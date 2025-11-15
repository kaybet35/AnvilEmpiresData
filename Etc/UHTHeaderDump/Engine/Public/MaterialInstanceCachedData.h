#pragma once
#include "CoreMinimal.h"
#include "MaterialInstanceCachedData.generated.h"

USTRUCT(BlueprintType)
struct FMaterialInstanceCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParentLayerIndexRemap;
    
    ENGINE_API FMaterialInstanceCachedData();
};

