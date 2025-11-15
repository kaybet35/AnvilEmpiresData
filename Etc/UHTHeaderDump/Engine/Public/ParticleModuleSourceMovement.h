#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleSourceMovement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleSourceMovement : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector SourceMovementScale;
    
    UParticleModuleSourceMovement();

};

