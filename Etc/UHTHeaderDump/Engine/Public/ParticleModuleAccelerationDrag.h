#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAccelerationDrag.generated.h"

class UDistributionFloat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDistributionFloat* DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat DragCoefficientRaw;
    
    UParticleModuleAccelerationDrag();

};

