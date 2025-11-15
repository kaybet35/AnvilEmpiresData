#pragma once
#include "CoreMinimal.h"
#include "Plane4f.h"
#include "Matrix44f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FMatrix44f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4f XPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4f YPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4f ZPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlane4f WPlane;
    
    COREUOBJECT_API FMatrix44f();
};

