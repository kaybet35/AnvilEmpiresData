#pragma once
#include "CoreMinimal.h"
#include "Int64Point.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt64Point {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    COREUOBJECT_API FInt64Point();
};

