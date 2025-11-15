#pragma once
#include "CoreMinimal.h"
#include "ObjectPropertyBase.h"
#include "WeakObjectProperty.generated.h"

UCLASS(Blueprintable)
class UWeakObjectProperty : public UObjectPropertyBase {
    GENERATED_BODY()
public:
    UWeakObjectProperty();

};

