#pragma once
#include "CoreMinimal.h"
#include "EEntitySerializationType.generated.h"

UENUM(BlueprintType)
enum EEntitySerializationType {
    SerializationTypeDefault,
    SerializationTypePlayer,
    SerializationTypeController,
};

