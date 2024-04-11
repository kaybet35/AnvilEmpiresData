#pragma once
#include "CoreMinimal.h"
#include "EFieldPositionType.generated.h"

UENUM(BlueprintType)
enum EFieldPositionType {
    Field_Position_CenterOfMass,
    Field_Position_PivotPoint,
};

