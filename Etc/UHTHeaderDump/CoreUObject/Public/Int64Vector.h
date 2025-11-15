#pragma once
#include "CoreMinimal.h"
#include "Int64Vector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt64Vector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Z;
    
    COREUOBJECT_API FInt64Vector();
};

