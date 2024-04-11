#pragma once
#include "CoreMinimal.h"
#include "RigSingleParentElement.h"
#include "RigReferenceElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigReferenceElement : public FRigSingleParentElement {
    GENERATED_BODY()
public:
    FRigReferenceElement();
};

