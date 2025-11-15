#pragma once
#include "CoreMinimal.h"
#include "Uint32Point.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUint32Point {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    COREUOBJECT_API FUint32Point();
};

