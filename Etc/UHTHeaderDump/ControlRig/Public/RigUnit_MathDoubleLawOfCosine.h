#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleLawOfCosine.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleLawOfCosine : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double C;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AlphaAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BetaAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GammaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    FRigUnit_MathDoubleLawOfCosine();
};

