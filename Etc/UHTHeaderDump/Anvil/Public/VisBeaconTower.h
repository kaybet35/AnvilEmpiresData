#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisBeaconTower.generated.h"

class UBeaconTowerDataComponent;
class UCombustionDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisBeaconTower : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBeaconTowerDataComponent* BeaconTowerDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombustionDataComponent* CombustionDataComponent;
    
public:
    AVisBeaconTower(const FObjectInitializer& ObjectInitializer);

};

