#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisStorehouse.generated.h"

class UStorehouseDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisStorehouse : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStorehouseDataComponent* StorehouseDataComponent;
    
    AVisStorehouse(const FObjectInitializer& ObjectInitializer);

};

