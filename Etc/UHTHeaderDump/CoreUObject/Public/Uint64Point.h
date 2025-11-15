#pragma once
#include "CoreMinimal.h"
#include "Uint64Point.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint64Point {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    COREUOBJECT_API FUint64Point();
};

