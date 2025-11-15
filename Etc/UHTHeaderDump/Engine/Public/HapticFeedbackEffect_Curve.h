#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackDetails_Curve.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackEffect_Curve.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHapticFeedbackDetails_Curve HapticDetails;
    
    UHapticFeedbackEffect_Curve();

};

