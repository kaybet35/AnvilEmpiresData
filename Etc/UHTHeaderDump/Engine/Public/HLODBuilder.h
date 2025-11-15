#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HLODBuilder.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UHLODBuilder : public UObject {
    GENERATED_BODY()
public:
    UHLODBuilder();

};

