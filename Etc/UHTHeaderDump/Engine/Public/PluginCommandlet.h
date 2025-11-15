#pragma once
#include "CoreMinimal.h"
#include "Commandlet.h"
#include "PluginCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPluginCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPluginCommandlet();

};

