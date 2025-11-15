#pragma once
#include "CoreMinimal.h"
#include "AnimDataModelNotifPayload.h"
#include "EAnimDataModelNotifyType.h"
#include "AnimDataModelModifiedDynamicEventDelegate.generated.h"

class UAnimDataModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAnimDataModelModifiedDynamicEvent, EAnimDataModelNotifyType, NotifType, UAnimDataModel*, Model, const FAnimDataModelNotifPayload&, Payload);

