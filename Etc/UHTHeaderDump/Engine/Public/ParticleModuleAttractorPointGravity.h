#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleAttractorBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAttractorPointGravity.generated.h"

class UDistributionFloat;

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDistributionFloat* Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StrengthRaw;
    
    UParticleModuleAttractorPointGravity();

};

