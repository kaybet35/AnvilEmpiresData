#pragma once
#include "CoreMinimal.h"
#include "HLODBuilder.h"
#include "NullHLODBuilder.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ENGINE_API UNullHLODBuilder : public UHLODBuilder {
    GENERATED_BODY()
public:
    UNullHLODBuilder();

};

