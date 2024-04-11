#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisHouse.generated.h"

class UHousingDataComponent;
class UPlayerSpawnerDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisHouse : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHousingDataComponent* HousingDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;
    
    AVisHouse(const FObjectInitializer& ObjectInitializer);

};

