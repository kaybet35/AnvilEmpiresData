#pragma once
#include "CoreMinimal.h"
#include "RigBoneHierarchy.h"
#include "RigControlHierarchy.h"
#include "RigCurveContainer.h"
#include "RigSpaceHierarchy.h"
#include "RigHierarchyContainer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigHierarchyContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigBoneHierarchy BoneHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigSpaceHierarchy SpaceHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlHierarchy ControlHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigCurveContainer CurveContainer;
    
    FRigHierarchyContainer();
};

