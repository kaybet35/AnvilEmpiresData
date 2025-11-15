#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSubmixPreset.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundEffectSubmixPreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSubmixPreset();

};

