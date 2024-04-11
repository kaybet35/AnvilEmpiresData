#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit -FallbackName=RigUnit
#include "RigUnit_ControlRigSplineBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_ControlRigSplineBase : public FRigUnit {
    GENERATED_BODY()
public:
    FRigUnit_ControlRigSplineBase();
};

