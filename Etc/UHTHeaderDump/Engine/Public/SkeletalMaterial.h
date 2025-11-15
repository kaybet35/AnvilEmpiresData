#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.h"
#include "SkeletalMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSkeletalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshUVChannelInfo UVChannelData;
    
    ENGINE_API FSkeletalMaterial();
};

