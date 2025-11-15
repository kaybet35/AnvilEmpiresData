#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackEffect_Buffer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Amplitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UHapticFeedbackEffect_Buffer();

};

