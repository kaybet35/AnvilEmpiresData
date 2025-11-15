#pragma once
#include "CoreMinimal.h"
#include "NamedEmitterMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNamedEmitterMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    ENGINE_API FNamedEmitterMaterial();
};

