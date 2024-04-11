#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseGetTransformArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Valid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    FRigUnit_PoseGetTransformArray();
};

