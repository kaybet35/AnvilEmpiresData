#pragma once
#include "CoreMinimal.h"
#include "Vector3d.h"
#include "Plane4d.generated.h"

USTRUCT(BlueprintType, Immutable, NoExport)
struct FPlane4d : public FVector3d {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double W;
    
    COREUOBJECT_API FPlane4d();
};

