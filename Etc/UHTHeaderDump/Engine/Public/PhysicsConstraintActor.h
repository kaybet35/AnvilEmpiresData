#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "PhysicsConstraintActor.generated.h"

class AActor;
class UPhysicsConstraintComponent;

UCLASS(Blueprintable, MinimalAPI)
class APhysicsConstraintActor : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* ConstraintComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConstraintActor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConstraintActor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableCollision: 1;
    
    APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer);

};

