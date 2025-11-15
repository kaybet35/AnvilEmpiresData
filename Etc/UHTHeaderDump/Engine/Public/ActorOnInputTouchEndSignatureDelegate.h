#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
#include "ActorOnInputTouchEndSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FActorOnInputTouchEndSignatureUObject*, EnterPropertyName, TEnumAsByte<ETouchIndex::Type>, FingerIndex, AActor*, TouchedActor);

