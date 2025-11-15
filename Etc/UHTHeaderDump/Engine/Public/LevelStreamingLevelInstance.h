#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingDynamic.h"
#include "LevelStreamingLevelInstance.generated.h"

UCLASS(Blueprintable, EditInlineNew, Transient)
class ENGINE_API ULevelStreamingLevelInstance : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    ULevelStreamingLevelInstance();

};

