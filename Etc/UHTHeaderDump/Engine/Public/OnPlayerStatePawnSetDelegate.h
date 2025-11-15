#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatePawnSetDelegate.generated.h"

class APawn;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerStatePawnSet, APlayerState*, Player, APawn*, NewPawn, APawn*, OldPawn);

