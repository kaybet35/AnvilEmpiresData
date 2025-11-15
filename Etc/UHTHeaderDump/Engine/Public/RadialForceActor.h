#pragma once
#include "CoreMinimal.h"
#include "RigidBodyBase.h"
#include "RadialForceActor.generated.h"

class URadialForceComponent;

UCLASS(Blueprintable, MinimalAPI)
class ARadialForceActor : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialForceComponent* ForceComponent;
    
public:
    ARadialForceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleForce();
    
    UFUNCTION(BlueprintCallable)
    void FireImpulse();
    
    UFUNCTION(BlueprintCallable)
    void EnableForce();
    
    UFUNCTION(BlueprintCallable)
    void DisableForce();
    
};

