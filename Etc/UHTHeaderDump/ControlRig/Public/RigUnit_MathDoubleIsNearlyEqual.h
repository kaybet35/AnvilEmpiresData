#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleIsNearlyEqual.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleIsNearlyEqual : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigUnit_MathDoubleIsNearlyEqual();
};

