#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisBoat.generated.h"

class UEntityAttachableDataComponent;
class UEntityAttachableProxyComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisBoat : public AVisVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UEntityAttachableProxyComponent*, UEntityAttachableDataComponent*> Slots;
    
public:
    AVisBoat(const FObjectInitializer& ObjectInitializer);

};

