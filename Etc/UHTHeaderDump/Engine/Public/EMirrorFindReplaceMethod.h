#pragma once
#include "CoreMinimal.h"
#include "EMirrorFindReplaceMethod.generated.h"

UENUM(BlueprintType)
namespace EMirrorFindReplaceMethod {
    enum Type {
        Prefix,
        Suffix,
        RegularExpression,
    };
}

