#pragma once
#include "CoreMinimal.h"
#include "OnSubmixRecordedFileDoneDelegate.generated.h"

class USoundWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubmixRecordedFileDone, const USoundWave*, ResultingSoundWave);

