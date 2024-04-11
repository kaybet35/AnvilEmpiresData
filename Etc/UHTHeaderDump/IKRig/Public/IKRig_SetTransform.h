#pragma once
#include "CoreMinimal.h"
#include "IKRigSolver.h"
#include "IKRig_SetTransform.generated.h"

class UIKRig_SetTransformEffector;

UCLASS(Blueprintable, EditInlineNew)
class IKRIG_API UIKRig_SetTransform : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRig_SetTransformEffector* Effector;
    
    UIKRig_SetTransform();

};

