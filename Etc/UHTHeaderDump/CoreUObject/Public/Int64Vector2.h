#pragma once
#include "CoreMinimal.h"
#include "Int64Vector2.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt64Vector2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    COREUOBJECT_API FInt64Vector2();
};

