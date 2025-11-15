#pragma once
#include "CoreMinimal.h"
#include "PropertyWrapper.h"
#include "MulticastDelegatePropertyWrapper.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper {
    GENERATED_BODY()
public:
    UMulticastDelegatePropertyWrapper();

};

