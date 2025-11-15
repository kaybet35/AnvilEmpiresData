#pragma once
#include "CoreMinimal.h"
#include "ReflectionCapture.h"
#include "PlaneReflectionCapture.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class APlaneReflectionCapture : public AReflectionCapture {
    GENERATED_BODY()
public:
    APlaneReflectionCapture(const FObjectInitializer& ObjectInitializer);

};

