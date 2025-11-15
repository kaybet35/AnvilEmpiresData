#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "DebugDrawComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UDebugDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

