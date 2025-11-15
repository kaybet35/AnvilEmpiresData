#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PaintedVertex.h"
#include "StaticMeshVertexColorLODData.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshVertexColorLODData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPaintedVertex> PaintedVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> VertexBufferColors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LODIndex;
    
    ENGINE_API FStaticMeshVertexColorLODData();
};

