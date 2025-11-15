#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveCylinder.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLocationPrimitiveCylinder_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLocationPrimitiveCylinder_Seeded();

};

