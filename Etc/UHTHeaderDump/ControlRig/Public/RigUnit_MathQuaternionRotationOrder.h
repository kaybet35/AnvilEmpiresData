#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
#include "RigUnit_MathBase.h"
#include "RigUnit_MathQuaternionRotationOrder.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEulerRotationOrder RotationOrder;
    
    FRigUnit_MathQuaternionRotationOrder();
};

