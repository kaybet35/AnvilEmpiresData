#pragma once
#include "CoreMinimal.h"
#include "SolverRemovalFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct CHAOS_API FSolverRemovalFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVolume;
    
    FSolverRemovalFilterSettings();
};

