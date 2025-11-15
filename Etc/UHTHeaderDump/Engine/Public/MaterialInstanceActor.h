#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "MaterialInstanceActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AMaterialInstanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    AMaterialInstanceActor(const FObjectInitializer& ObjectInitializer);

};

