#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctionsRuntimeData.h"
#include "StaticParameterSetRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FStaticParameterSetRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLayersFunctionsRuntimeData MaterialLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasMaterialLayers: 1;
    
    ENGINE_API FStaticParameterSetRuntimeData();
};

