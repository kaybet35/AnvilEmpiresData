#pragma once
#include "CoreMinimal.h"
#include "EAudioMixerChannelType.generated.h"

UENUM(BlueprintType)
enum class EAudioMixerChannelType : uint8 {
    FrontLeft,
    FrontRight,
    FrontCenter,
    LowFrequency,
    BackLeft,
    BackRight,
    FrontLeftOfCenter,
    FrontRightOfCenter,
    BackCenter,
    SideLeft,
    SideRight,
    TopCenter,
    TopFrontLeft,
    TopFrontCenter,
    TopFrontRight,
    TopBackLeft,
    TopBackCenter,
    TopBackRight,
    Unknown,
    ChannelTypeCount,
    DefaultChannel = FrontLeft,
};

