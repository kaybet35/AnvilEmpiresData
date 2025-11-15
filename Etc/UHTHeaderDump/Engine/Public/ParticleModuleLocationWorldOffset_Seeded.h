#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationWorldOffset.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLocationWorldOffset_Seeded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLocationWorldOffset_Seeded();

};

