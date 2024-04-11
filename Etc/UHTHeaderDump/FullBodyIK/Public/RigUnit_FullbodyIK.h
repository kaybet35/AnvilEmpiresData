#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
#include "FBIKConstraintOption.h"
#include "FBIKDebugOption.h"
#include "FBIKEndEffector.h"
#include "MotionProcessInput.h"
#include "RigUnit_FullbodyIK_WorkData.h"
#include "SolverInput.h"
#include "RigUnit_FullbodyIK.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFBIKEndEffector> Effectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFBIKConstraintOption> Constraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverInput SolverProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionProcessInput MotionProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFBIKDebugOption DebugOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_FullbodyIK_WorkData WorkData;
    
    FULLBODYIK_API FRigUnit_FullbodyIK();
};

