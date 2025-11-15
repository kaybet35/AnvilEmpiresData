#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "IntegralKey.h"
#include "IntegralCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FIntegralCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntegralKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultValueBeforeFirstKey;
    
public:
    FIntegralCurve();
};

