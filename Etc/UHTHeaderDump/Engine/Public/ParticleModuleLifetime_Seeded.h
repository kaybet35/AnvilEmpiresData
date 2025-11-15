#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLifetime.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLifetime_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLifetime_Seeded();

};

