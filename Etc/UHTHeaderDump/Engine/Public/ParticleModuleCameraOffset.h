#pragma once
#include "CoreMinimal.h"
#include "EParticleCameraOffsetUpdateMethod.h"
#include "ParticleModuleCameraBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleCameraOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnTimeOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;
    
    UParticleModuleCameraOffset();

};

