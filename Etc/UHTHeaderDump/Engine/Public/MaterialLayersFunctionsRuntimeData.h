#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctionsRuntimeData.generated.h"

class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct FMaterialLayersFunctionsRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialFunctionInterface*> LayerS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialFunctionInterface*> Blends;
    
    ENGINE_API FMaterialLayersFunctionsRuntimeData();
};

