#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisRefinery.generated.h"

class URefineResourceDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisRefinery : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefineResourceDataComponent* RefineResourceDataComponent;
    
    AVisRefinery(const FObjectInitializer& ObjectInitializer);

};

