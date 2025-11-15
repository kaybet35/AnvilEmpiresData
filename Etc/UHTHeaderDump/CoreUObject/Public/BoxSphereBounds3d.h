#pragma once
#include "CoreMinimal.h"
#include "Vector3d.h"
#include "BoxSphereBounds3d.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FBoxSphereBounds3d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d BoxExtent;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double SphereRadius;
    
    COREUOBJECT_API FBoxSphereBounds3d();
};

