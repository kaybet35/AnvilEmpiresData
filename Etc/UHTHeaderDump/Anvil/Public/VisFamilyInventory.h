#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyInventory.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyInventory : public AVisStructure {
    GENERATED_BODY()
public:
    AVisFamilyInventory(const FObjectInitializer& ObjectInitializer);

};

