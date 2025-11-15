#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.h"
#include "StaticMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FStaticMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImportedMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshUVChannelInfo UVChannelData;
    
    ENGINE_API FStaticMaterial();
};

