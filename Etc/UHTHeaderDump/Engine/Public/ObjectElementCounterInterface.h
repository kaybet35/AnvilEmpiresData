#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=TypedElementCounterInterface -FallbackName=TypedElementCounterInterface
#include "ObjectElementCounterInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UObjectElementCounterInterface : public UObject, public ITypedElementCounterInterface {
    GENERATED_BODY()
public:
    UObjectElementCounterInterface();


    // Fix for true pure virtual functions not being implemented
};

