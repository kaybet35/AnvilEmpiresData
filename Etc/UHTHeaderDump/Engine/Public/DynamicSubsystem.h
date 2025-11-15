#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "DynamicSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UDynamicSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UDynamicSubsystem();

};

