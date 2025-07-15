#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "DryingRackDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UDryingRackDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplicatedCurrentItemDryingProgress;
    
    UDryingRackDataComponent(const FObjectInitializer& ObjectInitializer);

};

