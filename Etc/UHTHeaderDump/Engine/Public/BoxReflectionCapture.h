#pragma once
#include "CoreMinimal.h"
#include "ReflectionCapture.h"
#include "BoxReflectionCapture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABoxReflectionCapture : public AReflectionCapture {
    GENERATED_BODY()
public:
    ABoxReflectionCapture(const FObjectInitializer& ObjectInitializer);

};

