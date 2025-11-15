#pragma once
#include "CoreMinimal.h"
#include "Vector4d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector4d {
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
    
    COREUOBJECT_API FVector4d();
};

