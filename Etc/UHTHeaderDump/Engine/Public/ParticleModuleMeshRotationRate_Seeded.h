#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRate.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleMeshRotationRate_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleMeshRotationRate_Seeded();

};

