#pragma once
#include "CoreMinimal.h"
#include "Uint64Vector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint64Vector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Z;
    
    COREUOBJECT_API FUint64Vector();
};

