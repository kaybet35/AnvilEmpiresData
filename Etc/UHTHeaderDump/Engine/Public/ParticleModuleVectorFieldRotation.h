#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleVectorFieldBase.h"
#include "ParticleModuleVectorFieldRotation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxInitialRotation;
    
    UParticleModuleVectorFieldRotation();

};

