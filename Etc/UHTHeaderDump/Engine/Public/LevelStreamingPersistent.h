#pragma once
#include "CoreMinimal.h"
#include "LevelStreaming.h"
#include "LevelStreamingPersistent.generated.h"

UCLASS(Blueprintable, EditInlineNew, Transient)
class ULevelStreamingPersistent : public ULevelStreaming {
    GENERATED_BODY()
public:
    ULevelStreamingPersistent();

};

