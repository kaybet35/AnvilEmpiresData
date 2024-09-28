#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisVehicle.generated.h"

class UArrowComponent;
class UAudioComponent;
class UEntityAttachableDataComponent;
class UHealthDataComponent;
class UNiagaraComponent;
class UVehicleMovementDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisVehicle : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVehicleMovementDataComponent* VehicleMovementDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEntityAttachableDataComponent* EntityAttachableDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MoveLoopAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MoveLoopParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthDataComponent* HealthDataComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    AVisVehicle(const FObjectInitializer& ObjectInitializer);

};

