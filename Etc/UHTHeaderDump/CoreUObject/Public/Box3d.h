#pragma once
#include "CoreMinimal.h"
#include "Vector3d.h"
#include "Box3d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FBox3d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsValid;
    
    COREUOBJECT_API FBox3d();
};

