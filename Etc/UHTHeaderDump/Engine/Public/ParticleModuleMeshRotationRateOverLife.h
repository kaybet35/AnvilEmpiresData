#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotationRateOverLife.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector RotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleRotRate: 1;
    
    UParticleModuleMeshRotationRateOverLife();

};

