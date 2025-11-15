#pragma once
#include "CoreMinimal.h"
#include "CylinderHeightAxis.h"
#include "ParticleModuleLocationPrimitiveBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLocationPrimitiveCylinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RadialVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat StartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<CylinderHeightAxis> HeightAxis;
    
    UParticleModuleLocationPrimitiveCylinder();

};

