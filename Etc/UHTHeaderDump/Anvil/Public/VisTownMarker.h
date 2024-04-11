#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisTownMarker.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisTownMarker : public AVisStructure {
    GENERATED_BODY()
public:
    AVisTownMarker(const FObjectInitializer& ObjectInitializer);

};

