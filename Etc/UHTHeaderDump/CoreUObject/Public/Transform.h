#pragma once
#include "CoreMinimal.h"
#include "Quat.h"
#include "Vector.h"
#include "Transform.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Scale3D;
    
    COREUOBJECT_API FTransform();
};

