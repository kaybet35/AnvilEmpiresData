#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSize.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleSize_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleSize_Seeded : public UParticleModuleSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleSize_Seeded();

};

