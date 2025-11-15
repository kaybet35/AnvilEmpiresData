#pragma once
#include "CoreMinimal.h"
#include "Uint32Vector2.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint32Vector2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Y;
    
    COREUOBJECT_API FUint32Vector2();
};

