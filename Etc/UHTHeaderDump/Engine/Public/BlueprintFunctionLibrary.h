#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintFunctionLibrary.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBlueprintFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UBlueprintFunctionLibrary();

};

