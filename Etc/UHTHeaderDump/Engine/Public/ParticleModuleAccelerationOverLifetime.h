#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleAccelerationOverLifetime.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector AccelOverLife;
    
    UParticleModuleAccelerationOverLifetime();

};

