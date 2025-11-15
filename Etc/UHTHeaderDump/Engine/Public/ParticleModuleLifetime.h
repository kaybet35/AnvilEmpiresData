#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLifetimeBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLifetime.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat Lifetime;
    
    UParticleModuleLifetime();

};

