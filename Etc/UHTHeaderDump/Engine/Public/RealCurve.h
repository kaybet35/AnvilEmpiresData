#pragma once
#include "CoreMinimal.h"
#include "ERichCurveExtrapolation.h"
#include "IndexedCurve.h"
#include "RealCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRealCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
    FRealCurve();
};

