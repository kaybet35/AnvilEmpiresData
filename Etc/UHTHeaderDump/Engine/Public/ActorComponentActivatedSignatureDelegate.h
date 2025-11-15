#pragma once
#include "CoreMinimal.h"
#include "ActorComponentActivatedSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorComponentActivatedSignatureUObject*, EnterPropertyName, UActorComponent*, Component, bool, bReset);

