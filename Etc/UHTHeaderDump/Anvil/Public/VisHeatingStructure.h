#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisHeatingStructure.generated.h"

class UCombustionDataComponent;
class UHeatingDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisHeatingStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeatingDataComponent* HeatingDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombustionDataComponent* CombustionDataComponent;
    
    AVisHeatingStructure(const FObjectInitializer& ObjectInitializer);

};

