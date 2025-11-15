#pragma once
#include "CoreMinimal.h"
#include "Vector3f.h"
#include "Plane4f.generated.h"

USTRUCT(BlueprintType, Immutable, NoExport)
struct FPlane4f : public FVector3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float W;
    
    COREUOBJECT_API FPlane4f();
};

