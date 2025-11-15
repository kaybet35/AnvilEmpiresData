#pragma once
#include "CoreMinimal.h"
#include "PlasticDeformationEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlasticDeformationEventSignature, int32, ConstraintIndex);

