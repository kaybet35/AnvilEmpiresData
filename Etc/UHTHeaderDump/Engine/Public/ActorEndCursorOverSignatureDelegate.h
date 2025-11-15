#pragma once
#include "CoreMinimal.h"
#include "ActorEndCursorOverSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorEndCursorOverSignatureUObject*, EnterPropertyName, AActor*, TouchedActor);

