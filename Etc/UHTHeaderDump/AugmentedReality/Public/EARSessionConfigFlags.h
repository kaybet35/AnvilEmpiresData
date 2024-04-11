#pragma once
#include "CoreMinimal.h"
#include "EARSessionConfigFlags.generated.h"

UENUM(BlueprintType)
enum class EARSessionConfigFlags : uint8 {
    None,
    GenerateMeshData,
    RenderMeshDataInWireframe,
    GenerateCollisionForMeshData = 4,
    GenerateNavMeshForMeshData = 8,
    UseMeshDataForOcclusion = 16,
};

