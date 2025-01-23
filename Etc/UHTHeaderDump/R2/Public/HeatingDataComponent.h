#pragma once
#include "CoreMinimal.h"
#include "CompHandleData.h"
#include "DataComponent.h"
#include "HeatingDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UHeatingDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBellowBoosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompHandleData ItemInventory;
    
    UHeatingDataComponent(const FObjectInitializer& ObjectInitializer);

};

