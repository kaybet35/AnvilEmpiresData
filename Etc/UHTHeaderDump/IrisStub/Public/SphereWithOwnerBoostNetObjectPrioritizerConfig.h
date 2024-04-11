#pragma once
#include "CoreMinimal.h"
#include "NetObjectPrioritizerConfig.h"
#include "SphereWithOwnerBoostNetObjectPrioritizerConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig {
    GENERATED_BODY()
public:
    USphereWithOwnerBoostNetObjectPrioritizerConfig();

};

