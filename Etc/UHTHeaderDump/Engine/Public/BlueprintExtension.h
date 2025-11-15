#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintExtension.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UBlueprintExtension : public UObject {
    GENERATED_BODY()
public:
    UBlueprintExtension();

};

