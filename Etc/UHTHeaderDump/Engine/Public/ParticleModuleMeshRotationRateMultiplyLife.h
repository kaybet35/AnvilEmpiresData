#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotationRateMultiplyLife.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector LifeMultiplier;
    
    UParticleModuleMeshRotationRateMultiplyLife();

};

