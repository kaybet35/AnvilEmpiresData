#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetCurveValue.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetCurveValue : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedCurveIndex;
    
public:
    CONTROLRIG_API FRigUnit_SetCurveValue();
};

