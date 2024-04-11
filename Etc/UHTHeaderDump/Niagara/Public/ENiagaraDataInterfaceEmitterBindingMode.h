#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataInterfaceEmitterBindingMode.generated.h"

UENUM()
enum class ENiagaraDataInterfaceEmitterBindingMode : int32 {
    Self,
    Other,
};

