#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=TypedElementCounterInterface -FallbackName=TypedElementCounterInterface
#include "ActorElementCounterInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UActorElementCounterInterface : public UObject, public ITypedElementCounterInterface {
    GENERATED_BODY()
public:
    UActorElementCounterInterface();


    // Fix for true pure virtual functions not being implemented
};

