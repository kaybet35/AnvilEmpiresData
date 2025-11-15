#pragma once
#include "CoreMinimal.h"
#include "LensBloomSettings.h"
#include "LensImperfectionSettings.h"
#include "LensSettings.generated.h"

USTRUCT(BlueprintType)
struct FLensSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLensBloomSettings Bloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLensImperfectionSettings Imperfections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ChromaticAberration;
    
    ENGINE_API FLensSettings();
};

