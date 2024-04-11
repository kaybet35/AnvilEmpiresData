#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "LifetimeDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API ULifetimeDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Age;
    
    ULifetimeDataComponent(const FObjectInitializer& ObjectInitializer);

};

