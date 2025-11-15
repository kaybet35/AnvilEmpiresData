#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSubUV.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleSubUVMovie.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEmitterTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingFrame;
    
    UParticleModuleSubUVMovie();

};

