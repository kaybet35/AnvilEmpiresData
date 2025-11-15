#pragma once
#include "CoreMinimal.h"
#include "Vector3f.h"
#include "BoxSphereBounds3f.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FBoxSphereBounds3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    COREUOBJECT_API FBoxSphereBounds3f();
};

