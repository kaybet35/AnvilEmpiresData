#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSubUVBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleSubUV.generated.h"

class USubUVAnimation;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleSubUV : public UParticleModuleSubUVBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubUVAnimation* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat SubImageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRealTime: 1;
    
    UParticleModuleSubUV();

};

