#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "AnimalRopeAttachableDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UAnimalRopeAttachableDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AttachedTarget;
    
    UAnimalRopeAttachableDataComponent(const FObjectInitializer& ObjectInitializer);

};

