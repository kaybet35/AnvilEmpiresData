#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocity.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleVelocity_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleVelocity_Seeded();

};

