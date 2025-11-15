#pragma once
#include "CoreMinimal.h"
#include "UintVector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUintVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Z;
    
    COREUOBJECT_API FUintVector();
};

