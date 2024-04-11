#pragma once
#include "CoreMinimal.h"
#include "RigTransformElement.h"
#include "RigMultiParentElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigMultiParentElement : public FRigTransformElement {
    GENERATED_BODY()
public:
    FRigMultiParentElement();
};

