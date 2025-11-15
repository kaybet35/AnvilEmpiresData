#pragma once
#include "CoreMinimal.h"
#include "Int32Vector.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt32Vector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    COREUOBJECT_API FInt32Vector();
};

