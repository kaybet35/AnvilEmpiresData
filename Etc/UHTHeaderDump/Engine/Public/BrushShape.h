#pragma once
#include "CoreMinimal.h"
#include "Brush.h"
#include "BrushShape.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABrushShape : public ABrush {
    GENERATED_BODY()
public:
    ABrushShape(const FObjectInitializer& ObjectInitializer);

};

