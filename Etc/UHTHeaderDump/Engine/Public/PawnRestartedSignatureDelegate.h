#pragma once
#include "CoreMinimal.h"
#include "PawnRestartedSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FPawnRestartedSignatureUObject*, EnterPropertyName, APawn*, Pawn);

