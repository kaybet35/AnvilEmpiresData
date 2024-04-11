#pragma once
#include "CoreMinimal.h"
#include "CRSimLinearSpring.generated.h"

USTRUCT(BlueprintType)
struct FCRSimLinearSpring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubjectA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubjectB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Coefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Equilibrium;
    
    CONTROLRIG_API FCRSimLinearSpring();
};

