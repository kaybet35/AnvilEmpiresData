#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleVectorFieldBase.h"
#include "ParticleModuleVectorFieldRotationRate.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotationRate;
    
    UParticleModuleVectorFieldRotationRate();

};

