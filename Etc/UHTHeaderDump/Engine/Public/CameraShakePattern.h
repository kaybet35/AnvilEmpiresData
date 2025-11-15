#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraShakePattern.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UCameraShakePattern : public UObject {
    GENERATED_BODY()
public:
    UCameraShakePattern();

};

