#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "PhysicsThruster.generated.h"

class UPhysicsThrusterComponent;

UCLASS(Blueprintable)
class APhysicsThruster : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsThrusterComponent* ThrusterComponent;
    
public:
    APhysicsThruster(const FObjectInitializer& ObjectInitializer);

};

