#pragma once
#include "CoreMinimal.h"
#include "EMathConstantsEnum.generated.h"

UENUM(BlueprintType)
enum class EMathConstantsEnum : uint8 {
    Dataflow_MathConstants_Pi,
    Dataflow_MathConstants_HalfPi,
    Dataflow_MathConstants_TwoPi,
    Dataflow_MathConstants_FourPi,
    Dataflow_MathConstants_InvPi,
    Dataflow_MathConstants_InvTwoPi,
    Dataflow_MathConstants_Sqrt2,
    Dataflow_MathConstants_InvSqrt2,
    Dataflow_MathConstants_Sqrt3,
    Dataflow_MathConstants_InvSqrt3,
    Dataflow_FloatToInt_Function_E,
    Dataflow_FloatToInt_Function_Gamma,
    Dataflow_FloatToInt_Function_GoldenRatio,
    Dataflow_FloatToInt_Function_ZeroTolerance,
};

