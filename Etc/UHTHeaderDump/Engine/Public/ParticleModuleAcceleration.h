#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleAcceleration.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyOwnerScale: 1;
    
    UParticleModuleAcceleration();

};

