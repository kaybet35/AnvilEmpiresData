#pragma once
#include "CoreMinimal.h"
#include "Int32Point.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt32Point {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    COREUOBJECT_API FInt32Point();
};

