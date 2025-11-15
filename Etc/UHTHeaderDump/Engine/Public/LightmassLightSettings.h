#pragma once
#include "CoreMinimal.h"
#include "LightmassLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightmassLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndirectLightingSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAreaShadowsForStationaryLight;
    
    ENGINE_API FLightmassLightSettings();
};

