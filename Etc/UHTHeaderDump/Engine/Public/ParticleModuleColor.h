#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColorBase.h"
#include "RawDistributionFloat.h"
#include "RawDistributionVector.h"
#include "ParticleModuleColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleColor : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector StartColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClampAlpha: 1;
    
    UParticleModuleColor();

};

