#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleClamp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleClamp : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Minimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Maximum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigUnit_MathDoubleClamp();
};

