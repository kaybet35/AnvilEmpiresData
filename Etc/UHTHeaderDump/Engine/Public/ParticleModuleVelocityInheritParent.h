#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleVelocityInheritParent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Scale;
    
    UParticleModuleVelocityInheritParent();

};

