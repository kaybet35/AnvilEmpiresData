#pragma once
#include "CoreMinimal.h"
#include "RigBaseElement.h"
#include "RigCurveElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigCurveElement : public FRigBaseElement {
    GENERATED_BODY()
public:
    FRigCurveElement();
};

