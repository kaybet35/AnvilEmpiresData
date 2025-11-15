#pragma once
#include "CoreMinimal.h"
#include "Struct.h"
#include "Class.generated.h"

UCLASS(Blueprintable, Within=Package)
class UClass : public UStruct {
    GENERATED_BODY()
public:
    UClass();

};

