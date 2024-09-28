#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EntityHandle.h"
#include "AnimalRopeSlotDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UAnimalRopeSlotDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle AttachedTarget;
    
    UAnimalRopeSlotDataComponent(const FObjectInitializer& ObjectInitializer);

};

