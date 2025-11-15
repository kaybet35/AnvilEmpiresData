#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "PhysicsThrusterComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhysicsThrusterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ThrustStrength;
    
    UPhysicsThrusterComponent(const FObjectInitializer& ObjectInitializer);

};

