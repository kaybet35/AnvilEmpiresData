#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EntityActorRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UEntityActorRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEntityActorRootComponent(const FObjectInitializer& ObjectInitializer);

};

