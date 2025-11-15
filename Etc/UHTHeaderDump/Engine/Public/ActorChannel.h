#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "ActorChannel.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ENGINE_API UActorChannel : public UChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CreateSubObjects;
    
    UActorChannel();

};

