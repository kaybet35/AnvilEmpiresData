#pragma once
#include "CoreMinimal.h"
#include "Vector2f.h"
#include "Box2f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FBox2f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2f Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2f Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsValid;
    
    COREUOBJECT_API FBox2f();
};

