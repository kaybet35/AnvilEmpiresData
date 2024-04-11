#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_UnsetCurveValue.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_UnsetCurveValue : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Curve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedCurveIndex;
    
public:
    CONTROLRIG_API FRigUnit_UnsetCurveValue();
};

