#pragma once
#include "CoreMinimal.h"
#include "CompHandleData.h"
#include "DataComponent.h"
#include "VehicleSeatDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UVehicleSeatDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompHandleData Occupant;
    
    UVehicleSeatDataComponent(const FObjectInitializer& ObjectInitializer);

};

