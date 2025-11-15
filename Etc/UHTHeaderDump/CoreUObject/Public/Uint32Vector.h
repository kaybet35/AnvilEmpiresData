#pragma once
#include "CoreMinimal.h"
#include "Uint32Vector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint32Vector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Z;
    
    COREUOBJECT_API FUint32Vector();
};

