#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "UVID.generated.h"

USTRUCT(BlueprintType)
struct FUVID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FUVID();
};

