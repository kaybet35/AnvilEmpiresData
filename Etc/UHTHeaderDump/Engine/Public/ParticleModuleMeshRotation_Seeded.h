#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMeshRotation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleMeshRotation_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleMeshRotation_Seeded();

};

