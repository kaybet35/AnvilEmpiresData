#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "RichCurves.generated.h"

USTRUCT(BlueprintType)
struct FRichCurves {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichCurve> RichCurves;
    
    CHAOSCACHING_API FRichCurves();
};

