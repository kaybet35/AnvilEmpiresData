#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EntityHandle.h"
#include "EntityAttachableDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UEntityAttachableDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle AttachedChildEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle AttachedParentEntity;
    
    UEntityAttachableDataComponent(const FObjectInitializer& ObjectInitializer);

};

