#pragma once
#include "CoreMinimal.h"
#include "RigCurve.h"
#include "RigCurveContainer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigCurveContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigCurve> Curves;
    
public:
    FRigCurveContainer();
};

