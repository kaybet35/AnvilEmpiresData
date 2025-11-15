#pragma once
#include "CoreMinimal.h"
#include "ActorComponentDeactivateSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FActorComponentDeactivateSignatureUObject*, EnterPropertyName, UActorComponent*, Component);

