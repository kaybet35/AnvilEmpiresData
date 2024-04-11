#pragma once
#include "CoreMinimal.h"
#include "SequentialIDBase.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FSequentialIDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    FSequentialIDBase();
};

