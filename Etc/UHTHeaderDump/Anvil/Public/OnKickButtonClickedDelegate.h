#pragma once
#include "CoreMinimal.h"
#include "OnKickButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKickButtonClicked, uint64, PlayerId);

