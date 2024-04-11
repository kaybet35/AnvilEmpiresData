#pragma once
#include "CoreMinimal.h"
#include "SimpleIndexedHandleBase.h"
#include "IndexedHandleBase.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FIndexedHandleBase : public FSimpleIndexedHandleBase {
    GENERATED_BODY()
public:
    FIndexedHandleBase();
};

