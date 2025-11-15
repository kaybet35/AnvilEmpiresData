#pragma once
#include "CoreMinimal.h"
#include "ActorInstanceHandle.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FActorInstanceHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
public:
    FActorInstanceHandle();
};

