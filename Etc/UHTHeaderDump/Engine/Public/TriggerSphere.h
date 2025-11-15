#pragma once
#include "CoreMinimal.h"
#include "TriggerBase.h"
#include "TriggerSphere.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ATriggerSphere : public ATriggerBase {
    GENERATED_BODY()
public:
    ATriggerSphere(const FObjectInitializer& ObjectInitializer);

};

