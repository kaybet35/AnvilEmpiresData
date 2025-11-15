#pragma once
#include "CoreMinimal.h"
#include "PawnControllerChangedSignatureDelegate.generated.h"

class AController;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FPawnControllerChangedSignatureUObject*, EnterPropertyName, APawn*, Pawn, AController*, OldController, AController*, NewController);

