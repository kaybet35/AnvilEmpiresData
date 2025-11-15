#pragma once
#include "CoreMinimal.h"
#include "IntVector2.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FIntVector2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    COREUOBJECT_API FIntVector2();
};

