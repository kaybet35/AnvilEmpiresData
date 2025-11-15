#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "Plane.generated.h"

USTRUCT(BlueprintType, Immutable, NoExport)
struct FPlane : public FVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double W;
    
    COREUOBJECT_API FPlane();
};

