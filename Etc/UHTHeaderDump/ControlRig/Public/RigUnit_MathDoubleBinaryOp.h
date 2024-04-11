#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleBinaryOp : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigUnit_MathDoubleBinaryOp();
};

