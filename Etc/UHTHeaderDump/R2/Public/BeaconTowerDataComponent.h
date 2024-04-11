#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "BeaconTowerDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UBeaconTowerDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInformed;
    
    UBeaconTowerDataComponent(const FObjectInitializer& ObjectInitializer);

};

