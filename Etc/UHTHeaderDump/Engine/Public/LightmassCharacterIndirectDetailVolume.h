#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "LightmassCharacterIndirectDetailVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ALightmassCharacterIndirectDetailVolume : public AVolume {
    GENERATED_BODY()
public:
    ALightmassCharacterIndirectDetailVolume(const FObjectInitializer& ObjectInitializer);

};

