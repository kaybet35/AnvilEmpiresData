#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "MoviePipelineGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class MOVIERENDERPIPELINECORE_API AMoviePipelineGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AMoviePipelineGameMode(const FObjectInitializer& ObjectInitializer);

};

