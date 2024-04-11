#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleConstant.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleConstant : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    FRigUnit_MathDoubleConstant();
};

