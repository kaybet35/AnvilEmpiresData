#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "ShipMovementDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UShipMovementDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RudderAngle;
    
    UShipMovementDataComponent(const FObjectInitializer& ObjectInitializer);

};

