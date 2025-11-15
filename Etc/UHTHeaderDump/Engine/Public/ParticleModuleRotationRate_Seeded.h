#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRate.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleRotationRate_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleRotationRate_Seeded();

};

