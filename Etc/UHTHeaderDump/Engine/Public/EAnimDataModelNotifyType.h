#pragma once
#include "CoreMinimal.h"
#include "EAnimDataModelNotifyType.generated.h"

UENUM(BlueprintType)
enum class EAnimDataModelNotifyType : uint8 {
    BracketOpened,
    BracketClosed,
    TrackAdded,
    TrackChanged,
    TrackRemoved,
    SequenceLengthChanged,
    FrameRateChanged,
    CurveAdded,
    CurveChanged,
    CurveRemoved,
    CurveFlagsChanged,
    CurveRenamed,
    CurveScaled,
    CurveColorChanged,
    AttributeAdded,
    AttributeRemoved,
    AttributeChanged,
    Populated,
    Reset,
    Invalid,
};

