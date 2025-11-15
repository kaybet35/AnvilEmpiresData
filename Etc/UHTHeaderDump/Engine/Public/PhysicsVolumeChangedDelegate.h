#pragma once
#include "CoreMinimal.h"
#include "PhysicsVolumeChangedDelegate.generated.h"

class APhysicsVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FPhysicsVolumeChangedUObject*, EnterPropertyName, APhysicsVolume*, NewVolume);

