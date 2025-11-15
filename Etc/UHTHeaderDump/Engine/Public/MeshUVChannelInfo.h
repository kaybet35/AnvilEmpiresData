#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FMeshUVChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDensities;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalUVDensities[4];
    
    ENGINE_API FMeshUVChannelInfo();
};

