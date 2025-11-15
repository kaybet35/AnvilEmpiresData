#pragma once
#include "CoreMinimal.h"
#include "ConvolutionBloomSettings.h"
#include "EBloomMethod.h"
#include "GaussianSumBloomSettings.h"
#include "LensBloomSettings.generated.h"

USTRUCT(BlueprintType)
struct FLensBloomSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FGaussianSumBloomSettings GaussianSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FConvolutionBloomSettings Convolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBloomMethod> Method;
    
    ENGINE_API FLensBloomSettings();
};

