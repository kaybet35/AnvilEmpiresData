#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EntityHandle.h"
#include "AnimalRopeAttachableDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UAnimalRopeAttachableDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle AttachedTarget;
    
    UAnimalRopeAttachableDataComponent(const FObjectInitializer& ObjectInitializer);

};

