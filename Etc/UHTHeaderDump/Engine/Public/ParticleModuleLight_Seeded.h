#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLight.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLight_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleLight_Seeded : public UParticleModuleLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLight_Seeded();

};

