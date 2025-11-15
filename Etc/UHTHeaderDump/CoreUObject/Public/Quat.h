#pragma once
#include "CoreMinimal.h"
#include "Quat.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FQuat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Z;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double W;
    
    COREUOBJECT_API FQuat();
};

