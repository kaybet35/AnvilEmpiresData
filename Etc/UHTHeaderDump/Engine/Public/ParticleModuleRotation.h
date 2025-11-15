#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleRotation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleRotation : public UParticleModuleRotationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StartRotation;
    
    UParticleModuleRotation();

};

