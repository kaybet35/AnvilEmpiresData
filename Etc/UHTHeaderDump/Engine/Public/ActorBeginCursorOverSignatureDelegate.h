#pragma once
#include "CoreMinimal.h"
#include "ActorBeginCursorOverSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorBeginCursorOverSignatureUObject*, EnterPropertyName, AActor*, TouchedActor);

