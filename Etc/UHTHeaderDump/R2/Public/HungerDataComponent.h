#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "HungerDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UHungerDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hunger;
    
    UHungerDataComponent(const FObjectInitializer& ObjectInitializer);

};

