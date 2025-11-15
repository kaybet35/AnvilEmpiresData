#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleParameterDynamic.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleParameterDynamic_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleParameterDynamic_Seeded();

};

