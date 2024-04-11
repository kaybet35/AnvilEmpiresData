#pragma once
#include "CoreMinimal.h"
#include "ControlRigComponentMappedCurve.generated.h"

USTRUCT(BlueprintType)
struct FControlRigComponentMappedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    CONTROLRIG_API FControlRigComponentMappedCurve();
};

