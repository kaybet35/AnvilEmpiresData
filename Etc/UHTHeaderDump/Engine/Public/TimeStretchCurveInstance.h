#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveInstance.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTimeStretchCurveInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidData;
    
public:
    FTimeStretchCurveInstance();
};

