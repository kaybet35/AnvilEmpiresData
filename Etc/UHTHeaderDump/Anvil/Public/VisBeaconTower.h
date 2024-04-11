#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisBeaconTower.generated.h"

class UBeaconTowerDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisBeaconTower : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBeaconTowerDataComponent* BeaconTowerDataComponent;
    
public:
    AVisBeaconTower(const FObjectInitializer& ObjectInitializer);

};

