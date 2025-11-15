#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector StartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritParent: 1;
    
    UParticleModuleMeshRotation();

};

