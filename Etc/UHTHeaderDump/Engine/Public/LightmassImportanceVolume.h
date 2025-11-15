#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "LightmassImportanceVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ALightmassImportanceVolume : public AVolume {
    GENERATED_BODY()
public:
    ALightmassImportanceVolume(const FObjectInitializer& ObjectInitializer);

};

