#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "DemoNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENGINE_API UDemoNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UDemoNetConnection();

};

