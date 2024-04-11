#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseDouble.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NoiseDouble : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Minimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Maximum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    FRigUnit_NoiseDouble();
};

