#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VisLadderVehicleAnimInstance.generated.h"

class UVehicleSeatDataComponent;

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisLadderVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NativeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsFrontSeatOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsRearSeatOccupied;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVehicleSeatDataComponent* SecondVehicleSeatDataComponent;
    
public:
    UVisLadderVehicleAnimInstance();

};

