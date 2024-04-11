#pragma once
#include "CoreMinimal.h"
#include "RigTransformElement.h"
#include "RigSingleParentElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigSingleParentElement : public FRigTransformElement {
    GENERATED_BODY()
public:
    FRigSingleParentElement();
};

