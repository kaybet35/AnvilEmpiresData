#pragma once
#include "CoreMinimal.h"
#include "DynamicSubsystem.h"
#include "AudioEngineSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UAudioEngineSubsystem : public UDynamicSubsystem {
    GENERATED_BODY()
public:
    UAudioEngineSubsystem();

};

