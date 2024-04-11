#pragma once
#include "CoreMinimal.h"
#include "AudioSliderBase.h"
#include "AudioSlider.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class AUDIOWIDGETS_API UAudioSlider : public UAudioSliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCurveFloat> LinToOutputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCurveFloat> OutputToLinCurve;
    
    UAudioSlider();

};

