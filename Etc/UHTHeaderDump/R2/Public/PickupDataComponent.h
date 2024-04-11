#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "ItemCount.h"
#include "PickupDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPickupDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCount Item;
    
    UPickupDataComponent(const FObjectInitializer& ObjectInitializer);

};

