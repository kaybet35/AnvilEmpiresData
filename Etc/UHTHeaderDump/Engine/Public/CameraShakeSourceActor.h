#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "CameraShakeSourceActor.generated.h"

class UCameraShakeSourceComponent;

UCLASS(Blueprintable)
class ENGINE_API ACameraShakeSourceActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraShakeSourceComponent* CameraShakeSourceComponent;
    
public:
    ACameraShakeSourceActor(const FObjectInitializer& ObjectInitializer);

};

