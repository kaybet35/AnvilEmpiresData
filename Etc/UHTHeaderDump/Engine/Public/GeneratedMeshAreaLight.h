#pragma once
#include "CoreMinimal.h"
#include "SpotLight.h"
#include "GeneratedMeshAreaLight.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AGeneratedMeshAreaLight : public ASpotLight {
    GENERATED_BODY()
public:
    AGeneratedMeshAreaLight(const FObjectInitializer& ObjectInitializer);

};

