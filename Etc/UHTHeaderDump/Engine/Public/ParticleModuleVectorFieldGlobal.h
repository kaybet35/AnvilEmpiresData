#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "ParticleModuleVectorFieldGlobal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideGlobalVectorFieldTightness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalVectorFieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalVectorFieldTightness;
    
    UParticleModuleVectorFieldGlobal();

};

