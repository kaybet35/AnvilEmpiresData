#pragma once
#include "CoreMinimal.h"
#include "Vector2f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FVector2f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Y;
    
    COREUOBJECT_API FVector2f();
};

