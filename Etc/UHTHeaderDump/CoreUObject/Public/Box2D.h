#pragma once
#include "CoreMinimal.h"
#include "Vector2D.h"
#include "Box2D.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FBox2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsValid;
    
    COREUOBJECT_API FBox2D();
};

