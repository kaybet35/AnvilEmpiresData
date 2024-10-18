#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyMarkerArea.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyMarkerArea : public AVisStructure {
    GENERATED_BODY()
public:
    AVisFamilyMarkerArea(const FObjectInitializer& ObjectInitializer);

};

