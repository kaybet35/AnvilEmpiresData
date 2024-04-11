#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "AnvilGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API AAnvilGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AAnvilGameModeBase(const FObjectInitializer& ObjectInitializer);

};

