#pragma once
#include "CoreMinimal.h"
#include "ActorDestroyedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorDestroyedSignatureUObject*, EnterPropertyName, AActor*, DestroyedActor);

