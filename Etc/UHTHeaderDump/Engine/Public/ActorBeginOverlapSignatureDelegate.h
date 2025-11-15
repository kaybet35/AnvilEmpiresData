#pragma once
#include "CoreMinimal.h"
#include "ActorBeginOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorBeginOverlapSignatureUObject*, EnterPropertyName, AActor*, OverlappedActor, AActor*, OtherActor);

