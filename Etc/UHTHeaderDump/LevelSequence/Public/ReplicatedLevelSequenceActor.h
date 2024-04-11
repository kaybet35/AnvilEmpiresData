#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "ReplicatedLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class LEVELSEQUENCE_API AReplicatedLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AReplicatedLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

