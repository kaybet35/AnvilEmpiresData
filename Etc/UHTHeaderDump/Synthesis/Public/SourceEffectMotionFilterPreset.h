#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectMotionFilterSettings.h"
#include "SourceEffectMotionFilterPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectMotionFilterPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectMotionFilterSettings Settings;
    
    USourceEffectMotionFilterPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectMotionFilterSettings& InSettings);
    
};

