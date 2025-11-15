#pragma once
#include "CoreMinimal.h"
#include "EmitterDynamicParameter.h"
#include "ParticleModuleParameterBase.h"
#include "ParticleModuleParameterDynamic.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FEmitterDynamicParameter> DynamicParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesVelocity: 1;
    
    UParticleModuleParameterDynamic();

};

