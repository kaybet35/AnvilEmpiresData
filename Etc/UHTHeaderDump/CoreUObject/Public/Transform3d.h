#pragma once
#include "CoreMinimal.h"
#include "Quat4d.h"
#include "Vector3d.h"
#include "Transform3d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FTransform3d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuat4d Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Scale3D;
    
    COREUOBJECT_API FTransform3d();
};

