#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctions.h"
#include "StaticParameterBase.h"
#include "StaticMaterialLayersParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticMaterialLayersParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLayersFunctions Value;
    
    ENGINE_API FStaticMaterialLayersParameter();
};

