#pragma once
#include "CoreMinimal.h"
#include "Property.h"
#include "ObjectPropertyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UObjectPropertyBase : public UProperty {
    GENERATED_BODY()
public:
    UObjectPropertyBase();

};

