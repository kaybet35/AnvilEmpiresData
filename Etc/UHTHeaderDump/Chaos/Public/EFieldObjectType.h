#pragma once
#include "CoreMinimal.h"
#include "EFieldObjectType.generated.h"

UENUM(BlueprintType)
enum EFieldObjectType {
    Field_Object_Rigid,
    Field_Object_Cloth,
    Field_Object_Destruction,
    Field_Object_Character,
    Field_Object_All,
};

