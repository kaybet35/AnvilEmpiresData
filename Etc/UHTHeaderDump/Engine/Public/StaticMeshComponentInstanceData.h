#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PrimitiveComponentInstanceData.h"
#include "StaticMeshVertexColorLODData.h"
#include "StreamingTextureBuildInfo.h"
#include "StaticMeshComponentInstanceData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMeshVertexColorLODData> VertexColorLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CachedStaticLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
    
    ENGINE_API FStaticMeshComponentInstanceData();
};

