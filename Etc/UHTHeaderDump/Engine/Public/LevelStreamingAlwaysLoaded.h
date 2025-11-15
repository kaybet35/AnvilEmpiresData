#pragma once
#include "CoreMinimal.h"
#include "LevelStreaming.h"
#include "LevelStreamingAlwaysLoaded.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming {
    GENERATED_BODY()
public:
    ULevelStreamingAlwaysLoaded();

};

