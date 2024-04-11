#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection ItemsToGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    FRigUnit_HierarchyGetPose();
};

