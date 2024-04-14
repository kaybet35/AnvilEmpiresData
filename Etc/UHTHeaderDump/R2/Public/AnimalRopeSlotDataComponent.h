#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "AnimalRopeSlotDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UAnimalRopeSlotDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AttachedTarget;
    
    UAnimalRopeSlotDataComponent(const FObjectInitializer& ObjectInitializer);

};

