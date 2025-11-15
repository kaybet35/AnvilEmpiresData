#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeMeshUVTransforms.h"
#include "SkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh;
    
    FSkelMeshMergeUVTransformMapping();
};

