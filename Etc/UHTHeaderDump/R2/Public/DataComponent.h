#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DataComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDataComponent(const FObjectInitializer& ObjectInitializer);

};

