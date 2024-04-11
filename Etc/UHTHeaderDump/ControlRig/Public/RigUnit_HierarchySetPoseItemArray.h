#pragma once
#include "CoreMinimal.h"
#include "EBoneGetterSetterMode.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBaseMutable.h"
#include "RigUnit_HierarchySetPoseItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> ItemsToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FRigUnit_HierarchySetPoseItemArray();
};

