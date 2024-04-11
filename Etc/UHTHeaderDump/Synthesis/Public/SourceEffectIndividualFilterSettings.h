#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterCircuit.h"
#include "ESourceEffectMotionFilterType.h"
#include "SourceEffectIndividualFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectIndividualFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectMotionFilterCircuit FilterCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectMotionFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterQ;
    
    FSourceEffectIndividualFilterSettings();
};

