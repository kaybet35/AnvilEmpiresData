#pragma once
#include "CoreMinimal.h"
#include "InstancedStaticMeshInstanceData.h"
#include "InstancedStaticMeshLightMapInstanceData.h"
#include "InstancedStaticMeshRandomSeed.h"
#include "SceneComponentInstanceData.h"
#include "InstancedStaticMeshComponentInstanceData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PerInstanceSMCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstancingRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshRandomSeed> AdditionalRandomSeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPerInstanceHitProxies;
    
    ENGINE_API FInstancedStaticMeshComponentInstanceData();
};

