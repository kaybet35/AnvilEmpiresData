#pragma once
#include "CoreMinimal.h"
#include "Field.h"
#include "Property.generated.h"

UCLASS(Abstract, Blueprintable)
class UProperty : public UField {
    GENERATED_BODY()
public:
    UProperty();

};

