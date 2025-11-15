#pragma once
#include "CoreMinimal.h"
#include "ETextureColorSpace.generated.h"

UENUM(BlueprintType)
enum class ETextureColorSpace : uint8 {
    TCS_None,
    TCS_sRGB,
    TCS_Rec2020,
    TCS_ACESAP0,
    TCS_ACESAP1,
    TCS_P3DCI,
    TCS_P3D65,
    TCS_REDWideGamut,
    TCS_SonySGamut3,
    TCS_SonySGamut3Cine,
    TCS_AlexaWideGamut,
    TCS_CanonCinemaGamut,
    TCS_GoProProtuneNative,
    TCS_PanasonicVGamut,
    TCS_Custom = 99,
};

