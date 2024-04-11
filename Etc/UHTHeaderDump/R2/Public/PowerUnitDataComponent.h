#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "PowerUnitDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPowerUnitDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisVarUpdateHook;
    
    UPowerUnitDataComponent(const FObjectInitializer& ObjectInitializer);

};

