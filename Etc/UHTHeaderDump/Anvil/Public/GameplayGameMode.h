#pragma once
#include "CoreMinimal.h"
#include "AnvilGameModeBase.h"
#include "GameplayGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API AGameplayGameMode : public AAnvilGameModeBase {
    GENERATED_BODY()
public:
    AGameplayGameMode(const FObjectInitializer& ObjectInitializer);

};

