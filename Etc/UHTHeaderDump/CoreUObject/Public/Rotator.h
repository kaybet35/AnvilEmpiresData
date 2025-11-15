#pragma once
#include "CoreMinimal.h"
#include "Rotator.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRotator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Pitch;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Yaw;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double Roll;
    
    COREUOBJECT_API FRotator();
};

