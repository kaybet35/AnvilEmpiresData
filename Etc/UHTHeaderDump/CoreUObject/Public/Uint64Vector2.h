#pragma once
#include "CoreMinimal.h"
#include "Uint64Vector2.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint64Vector2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Y;
    
    COREUOBJECT_API FUint64Vector2();
};

