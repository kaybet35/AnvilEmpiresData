#pragma once
#include "CoreMinimal.h"
#include "UintVector2.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUintVector2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Y;
    
    COREUOBJECT_API FUintVector2();
};

