#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisHeatingStructure.generated.h"

class UHeatingDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisHeatingStructure : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeatingDataComponent* HeatingDataComponent;
    
public:
    AVisHeatingStructure(const FObjectInitializer& ObjectInitializer);

};

