#pragma once
#include "CoreMinimal.h"
#include "RigMultiParentElement.h"
#include "RigNullElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigNullElement : public FRigMultiParentElement {
    GENERATED_BODY()
public:
    FRigNullElement();
};

