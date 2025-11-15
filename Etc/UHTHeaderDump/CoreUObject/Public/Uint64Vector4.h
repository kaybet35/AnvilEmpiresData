#pragma once
#include "CoreMinimal.h"
#include "Uint64Vector4.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint64Vector4 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Z;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 W;
    
    COREUOBJECT_API FUint64Vector4();
};

