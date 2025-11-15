#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleVectorFieldScaleOverLife.generated.h"

class UDistributionFloat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDistributionFloat* VectorFieldScaleOverLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat VectorFieldScaleOverLifeRaw;
    
    UParticleModuleVectorFieldScaleOverLife();

};

