#pragma once
#include "CoreMinimal.h"
#include "HLODInstancingKey.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FHLODInstancingKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    ENGINE_API FHLODInstancingKey();
};
FORCEINLINE uint32 GetTypeHash(const FHLODInstancingKey) { return 0; }

