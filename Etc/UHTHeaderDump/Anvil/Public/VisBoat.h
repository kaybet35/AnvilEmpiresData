#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisBoat.generated.h"

class UEntityAttachableDataComponent;
class UEntityAttachableProxyComponent;
class UShipMovementDataComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisBoat : public AVisVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsInWaterCheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShipMovementDataComponent* ShipMovementDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GangplankLeftMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GangplankRightMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UEntityAttachableProxyComponent*, UEntityAttachableDataComponent*> Slots;
    
public:
    AVisBoat(const FObjectInitializer& ObjectInitializer);

};

