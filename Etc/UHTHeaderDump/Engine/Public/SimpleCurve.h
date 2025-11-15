#pragma once
#include "CoreMinimal.h"
#include "ERichCurveInterpMode.h"
#include "RealCurve.h"
#include "SimpleCurveKey.h"
#include "SimpleCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSimpleCurve : public FRealCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSimpleCurveKey> Keys;
    
    FSimpleCurve();
};

