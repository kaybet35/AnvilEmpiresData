#pragma once
#include "CoreMinimal.h"
#include "OnPawnControllerChangedDelegate.generated.h"

class AController;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnControllerChanged, APawn*, Pawn, AController*, Controller);

