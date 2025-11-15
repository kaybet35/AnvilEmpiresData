#pragma once
#include "CoreMinimal.h"
#include "EParticleAxisLock.h"
#include "ParticleModuleOrientationBase.h"
#include "ParticleModuleOrientationAxisLock.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EParticleAxisLock> LockAxisFlags;
    
    UParticleModuleOrientationAxisLock();

};

