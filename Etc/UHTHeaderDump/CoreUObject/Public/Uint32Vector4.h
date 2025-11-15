#pragma once
#include "CoreMinimal.h"
#include "Uint32Vector4.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint32Vector4 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Z;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 W;
    
    COREUOBJECT_API FUint32Vector4();
};

