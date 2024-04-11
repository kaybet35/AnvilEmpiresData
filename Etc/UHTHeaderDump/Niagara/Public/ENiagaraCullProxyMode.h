#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullProxyMode.generated.h"

UENUM()
enum class ENiagaraCullProxyMode : int32 {
    None,
    Instanced_Rendered,
};

