#pragma once
#include "CoreMinimal.h"
#include "Plane.h"
#include "Matrix.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FMatrix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane XPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane YPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane ZPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane WPlane;
    
    COREUOBJECT_API FMatrix();
};

