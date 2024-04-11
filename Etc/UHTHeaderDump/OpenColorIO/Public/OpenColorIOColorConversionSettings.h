#pragma once
#include "CoreMinimal.h"
#include "EOpenColorIOViewTransformDirection.h"
#include "OpenColorIOColorSpace.h"
#include "OpenColorIODisplayView.h"
#include "OpenColorIOColorConversionSettings.generated.h"

class UOpenColorIOConfiguration;

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIOColorConversionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenColorIOConfiguration* ConfigurationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorSpace SourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorSpace DestinationColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIODisplayView DestinationDisplayView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOpenColorIOViewTransformDirection DisplayViewDirection;
    
    FOpenColorIOColorConversionSettings();
};

