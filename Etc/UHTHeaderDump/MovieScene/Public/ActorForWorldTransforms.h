#pragma once
#include "CoreMinimal.h"
#include "ActorForWorldTransforms.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FActorForWorldTransforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FActorForWorldTransforms();
};

