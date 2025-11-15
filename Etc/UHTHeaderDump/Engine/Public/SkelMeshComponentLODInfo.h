#pragma once
#include "CoreMinimal.h"
#include "SkelMeshComponentLODInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkelMeshComponentLODInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> HiddenMaterials;
    
    FSkelMeshComponentLODInfo();
};

