#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlendSpaceTriangleEdgeInfo.generated.h"

USTRUCT(BlueprintType)
struct FBlendSpaceTriangleEdgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeighbourTriangleIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjacentPerimeterTriangleIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjacentPerimeterVertexIndices[2];
    
    ENGINE_API FBlendSpaceTriangleEdgeInfo();
};

