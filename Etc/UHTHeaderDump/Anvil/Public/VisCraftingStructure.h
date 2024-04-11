#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisCraftingStructure.generated.h"

class UCraftingDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisCraftingStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftingDataComponent* CraftingDataComponent;
    
    AVisCraftingStructure(const FObjectInitializer& ObjectInitializer);

};

