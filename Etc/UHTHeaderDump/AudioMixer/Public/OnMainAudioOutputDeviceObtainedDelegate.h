#pragma once
#include "CoreMinimal.h"
#include "OnMainAudioOutputDeviceObtainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMainAudioOutputDeviceObtained, const FString&, CurrentDevice);

