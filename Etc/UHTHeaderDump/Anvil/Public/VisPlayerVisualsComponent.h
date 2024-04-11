#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VisPlayerVisualsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisPlayerVisualsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVisPlayerVisualsComponent(const FObjectInitializer& ObjectInitializer);

};

