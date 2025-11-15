#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlendSpaceTriangleEdgeInfo.h"
#include "BlendSpaceTriangle.generated.h"

USTRUCT(BlueprintType)
struct FBlendSpaceTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndices[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Vertices[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceTriangleEdgeInfo EdgeInfo[3];
    
    ENGINE_API FBlendSpaceTriangle();
};

