#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterModDestination.h"
#include "ESourceEffectMotionFilterTopology.h"
#include "SourceEffectIndividualFilterSettings.h"
#include "SourceEffectMotionFilterModulationSettings.h"
#include "SourceEffectMotionFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectMotionFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectMotionFilterTopology MotionFilterTopology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionFilterMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectIndividualFilterSettings FilterASettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectIndividualFilterSettings FilterBSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> ModulationMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryVolumeDb;
    
    FSourceEffectMotionFilterSettings();
};

