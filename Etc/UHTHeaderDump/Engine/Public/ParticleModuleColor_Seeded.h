#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColor.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleColor_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleColor_Seeded : public UParticleModuleColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleColor_Seeded();

};

