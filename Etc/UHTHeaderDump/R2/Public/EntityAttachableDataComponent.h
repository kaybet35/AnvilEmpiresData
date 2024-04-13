#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EntityAttachableDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UEntityAttachableDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AttachedEntity;
    
    UEntityAttachableDataComponent(const FObjectInitializer& ObjectInitializer);

};

