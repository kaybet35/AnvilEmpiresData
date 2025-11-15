#pragma once
#include "CoreMinimal.h"
#include "Vector3d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector3d {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double X;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Y;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Z;
    
    COREUOBJECT_API FVector3d();
};

