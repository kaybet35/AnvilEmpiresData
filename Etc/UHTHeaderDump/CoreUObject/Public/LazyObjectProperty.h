#pragma once
#include "CoreMinimal.h"
#include "ObjectPropertyBase.h"
#include "LazyObjectProperty.generated.h"

UCLASS(Blueprintable)
class ULazyObjectProperty : public UObjectPropertyBase {
    GENERATED_BODY()
public:
    ULazyObjectProperty();

};

