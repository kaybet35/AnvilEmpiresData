#pragma once
#include "CoreMinimal.h"
#include "Vector2D.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Y;
    
    COREUOBJECT_API FVector2D();
};

