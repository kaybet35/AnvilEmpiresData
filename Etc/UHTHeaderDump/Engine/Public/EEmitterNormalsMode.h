#pragma once
#include "CoreMinimal.h"
#include "EEmitterNormalsMode.generated.h"

UENUM(BlueprintType)
enum EEmitterNormalsMode {
    ENM_CameraFacing,
    ENM_Spherical,
    ENM_Cylindrical,
};

