#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilAnimalState.h"
#include "AnimalAIDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UAnimalAIDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilAnimalState CurrentState;
    
    UAnimalAIDataComponent(const FObjectInitializer& ObjectInitializer);

};

