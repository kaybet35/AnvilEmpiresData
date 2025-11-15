#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSourcePreset.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundEffectSourcePreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSourcePreset();

};

