#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleRotation_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleRotation_Seeded();

};

