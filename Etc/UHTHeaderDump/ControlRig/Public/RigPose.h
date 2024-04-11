#pragma once
#include "CoreMinimal.h"
#include "RigPoseElement.h"
#include "RigPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigPoseElement> Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HierarchyTopologyVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseHash;
    
    FRigPose();
};

