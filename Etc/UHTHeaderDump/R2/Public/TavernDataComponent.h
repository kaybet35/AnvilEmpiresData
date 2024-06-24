#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "TavernDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UTavernDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentBuffLevel;
    
    UTavernDataComponent(const FObjectInitializer& ObjectInitializer);

};

