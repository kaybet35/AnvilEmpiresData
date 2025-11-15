#pragma once
#include "CoreMinimal.h"
#include "UintPoint.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FUintPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    COREUOBJECT_API FUintPoint();
};

