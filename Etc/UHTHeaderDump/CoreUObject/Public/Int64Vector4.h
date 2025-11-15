#pragma once
#include "CoreMinimal.h"
#include "Int64Vector4.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FInt64Vector4 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 Z;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 W;
    
    COREUOBJECT_API FInt64Vector4();
};

