#pragma once
#include "CoreMinimal.h"
#include "Plane4d.h"
#include "Matrix44d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FMatrix44d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4d XPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4d YPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4d ZPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4d WPlane;
    
    COREUOBJECT_API FMatrix44d();
};

