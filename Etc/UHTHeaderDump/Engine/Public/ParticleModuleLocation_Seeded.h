#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLocation_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocation_Seeded : public UParticleModuleLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLocation_Seeded();

};

