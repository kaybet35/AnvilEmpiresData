#pragma once
#include "CoreMinimal.h"
#include "CurveParameterPair.generated.h"

USTRUCT(BlueprintType)
struct FCurveParameterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserVariableName;
    
    NIAGARAANIMNOTIFIES_API FCurveParameterPair();
};

