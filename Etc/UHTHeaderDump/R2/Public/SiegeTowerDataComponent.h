#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilSiegeTowerState.h"
#include "SiegeTowerDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API USiegeTowerDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilSiegeTowerState RampState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRampAngle;
    
    USiegeTowerDataComponent(const FObjectInitializer& ObjectInitializer);

};

