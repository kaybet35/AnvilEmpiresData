#pragma once
#include "CoreMinimal.h"
#include "ETextureSourceEncoding.generated.h"

UENUM(BlueprintType)
enum class ETextureSourceEncoding : uint8 {
    TSE_None,
    TSE_Linear,
    TSE_sRGB,
    TSE_ST2084,
    TSE_Gamma22,
    TSE_BT1886,
    TSE_Gamma26,
    TSE_Cineon,
    TSE_REDLog,
    TSE_REDLog3G10,
    TSE_SLog1,
    TSE_SLog2,
    TSE_SLog3,
    TSE_AlexaV3LogC,
    TSE_CanonLog,
    TSE_ProTune,
    TSE_VLog,
};

