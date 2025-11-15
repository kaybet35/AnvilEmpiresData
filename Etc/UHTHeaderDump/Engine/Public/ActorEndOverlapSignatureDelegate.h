#pragma once
#include "CoreMinimal.h"
#include "ActorEndOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorEndOverlapSignatureUObject*, EnterPropertyName, AActor*, OverlappedActor, AActor*, OtherActor);

