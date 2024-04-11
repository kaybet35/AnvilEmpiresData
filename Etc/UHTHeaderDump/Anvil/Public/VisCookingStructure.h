#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisCookingStructure.generated.h"

class UCookingDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisCookingStructure : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCookingDataComponent* CookingDataComponent;
    
public:
    AVisCookingStructure(const FObjectInitializer& ObjectInitializer);

};

