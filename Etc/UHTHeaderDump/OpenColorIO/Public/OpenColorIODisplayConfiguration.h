#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorConversionSettings.h"
#include "OpenColorIODisplayConfiguration.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIODisplayConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIOColorConversionSettings ColorConfiguration;
    
    FOpenColorIODisplayConfiguration();
};

