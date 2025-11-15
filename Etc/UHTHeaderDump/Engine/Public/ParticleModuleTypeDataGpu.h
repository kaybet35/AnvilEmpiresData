#pragma once
#include "CoreMinimal.h"
#include "GPUSpriteEmitterInfo.h"
#include "GPUSpriteResourceData.h"
#include "ParticleModuleTypeDataBase.h"
#include "ParticleModuleTypeDataGpu.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGPUSpriteEmitterInfo EmitterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGPUSpriteResourceData ResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMotionBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClearExistingParticlesOnInit: 1;
    
    UParticleModuleTypeDataGpu();

};

