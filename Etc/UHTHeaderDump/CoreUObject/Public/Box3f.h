#pragma once
#include "CoreMinimal.h"
#include "Vector3f.h"
#include "Box3f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FBox3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsValid;
    
    COREUOBJECT_API FBox3f();
};

