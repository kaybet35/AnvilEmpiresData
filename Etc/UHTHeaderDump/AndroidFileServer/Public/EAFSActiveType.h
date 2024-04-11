#pragma once
#include "CoreMinimal.h"
#include "EAFSActiveType.generated.h"

UENUM(BlueprintType)
namespace EAFSActiveType {
    enum Type {
        None,
        USBOnly,
        NetworkOnly,
        Combined,
    };
}

