#pragma once
#include "CoreMinimal.h"
#include "AnvilGameModeBase.h"
#include "MainMenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API AMainMenuGameMode : public AAnvilGameModeBase {
    GENERATED_BODY()
public:
    AMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

