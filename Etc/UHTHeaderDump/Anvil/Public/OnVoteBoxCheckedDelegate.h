#pragma once
#include "CoreMinimal.h"
#include "OnVoteBoxCheckedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoteBoxChecked, bool, bIsChecked, uint64, PlayerId);

