#pragma once
#include "CoreMinimal.h"
#include "ConstrainComponentPropName.generated.h"

USTRUCT(BlueprintType)
struct FConstrainComponentPropName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    ENGINE_API FConstrainComponentPropName();
};

