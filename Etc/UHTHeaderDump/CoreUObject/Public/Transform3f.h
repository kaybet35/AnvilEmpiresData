#pragma once
#include "CoreMinimal.h"
#include "Quat4f.h"
#include "Vector3f.h"
#include "Transform3f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FTransform3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuat4f Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Scale3D;
    
    COREUOBJECT_API FTransform3f();
};

