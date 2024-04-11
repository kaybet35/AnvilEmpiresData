#pragma once
#include "CoreMinimal.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseIsEmpty.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEmpty;
    
    FRigUnit_PoseIsEmpty();
};

