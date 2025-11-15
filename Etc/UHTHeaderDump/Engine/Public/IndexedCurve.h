#pragma once
#include "CoreMinimal.h"
#include "KeyHandleMap.h"
#include "IndexedCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FIndexedCurve {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKeyHandleMap KeyHandlesToIndices;
    
public:
    FIndexedCurve();
};

