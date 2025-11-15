#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "RigidBodyBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ARigidBodyBase : public AActor {
    GENERATED_BODY()
public:
    ARigidBodyBase(const FObjectInitializer& ObjectInitializer);

};

