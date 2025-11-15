#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SplineMeshActor.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable)
class ENGINE_API ASplineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ASplineMeshActor(const FObjectInitializer& ObjectInitializer);

};

