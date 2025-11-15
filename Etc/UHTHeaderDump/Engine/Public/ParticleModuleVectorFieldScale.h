#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleVectorFieldScale.generated.h"

class UDistributionFloat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDistributionFloat* VectorFieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat VectorFieldScaleRaw;
    
    UParticleModuleVectorFieldScale();

};

