#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "LineBatchComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULineBatchComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    ULineBatchComponent(const FObjectInitializer& ObjectInitializer);

};

