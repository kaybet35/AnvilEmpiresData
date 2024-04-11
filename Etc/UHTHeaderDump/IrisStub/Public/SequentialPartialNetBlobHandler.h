#pragma once
#include "CoreMinimal.h"
#include "NetBlobHandler.h"
#include "SequentialPartialNetBlobHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USequentialPartialNetBlobHandler : public UNetBlobHandler {
    GENERATED_BODY()
public:
    USequentialPartialNetBlobHandler();

};

