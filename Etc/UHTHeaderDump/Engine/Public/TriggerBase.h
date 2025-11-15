#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "TriggerBase.generated.h"

class UShapeComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ATriggerBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
public:
    ATriggerBase(const FObjectInitializer& ObjectInitializer);

};

