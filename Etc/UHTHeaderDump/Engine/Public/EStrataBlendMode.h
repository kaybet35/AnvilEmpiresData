#pragma once
#include "CoreMinimal.h"
#include "EStrataBlendMode.generated.h"

UENUM(BlueprintType)
enum EStrataBlendMode {
    SBM_Opaque,
    SBM_Masked,
    SBM_TranslucentGreyTransmittance,
    SBM_TranslucentColoredTransmittance,
    SBM_ColoredTransmittanceOnly,
    SBM_AlphaHoldout,
};

