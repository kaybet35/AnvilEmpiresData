#pragma once
#include "CoreMinimal.h"
#include "MeshSectionInfo.h"
#include "MeshSectionInfoMap.generated.h"

USTRUCT(BlueprintType)
struct FMeshSectionInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FMeshSectionInfo> Map;
    
    ENGINE_API FMeshSectionInfoMap();
};

