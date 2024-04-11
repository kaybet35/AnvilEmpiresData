#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "TrapDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UTrapDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasTriggered;
    
    UTrapDataComponent(const FObjectInitializer& ObjectInitializer);

};

