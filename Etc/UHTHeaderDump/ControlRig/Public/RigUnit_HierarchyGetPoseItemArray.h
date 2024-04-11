#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetPoseItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> ItemsToGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    FRigUnit_HierarchyGetPoseItemArray();
};

