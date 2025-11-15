#pragma once
#include "CoreMinimal.h"
#include "PendingNetGame.h"
#include "DemoPendingNetGame.generated.h"

UCLASS(Blueprintable, NonTransient)
class UDemoPendingNetGame : public UPendingNetGame {
    GENERATED_BODY()
public:
    UDemoPendingNetGame();

};

