#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingAlwaysLoaded.h"
#include "LevelStreamingLevelInstanceEditor.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Transient)
class ULevelStreamingLevelInstanceEditor : public ULevelStreamingAlwaysLoaded {
    GENERATED_BODY()
public:
    ULevelStreamingLevelInstanceEditor();

};

