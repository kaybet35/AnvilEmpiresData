#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "Info.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AInfo : public AActor {
    GENERATED_BODY()
public:
    AInfo(const FObjectInitializer& ObjectInitializer);

};

