#pragma once
#include "CoreMinimal.h"
#include "Vector3f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Z;
    
    COREUOBJECT_API FVector3f();
};

