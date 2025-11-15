#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAccelerationDragScaleOverLife.generated.h"

class UDistributionFloat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDistributionFloat* DragScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat DragScaleRaw;
    
    UParticleModuleAccelerationDragScaleOverLife();

};

