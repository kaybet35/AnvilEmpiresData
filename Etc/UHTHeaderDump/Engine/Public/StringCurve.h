#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "StringCurveKey.h"
#include "StringCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FStringCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FStringCurveKey> Keys;
    
    FStringCurve();
};

