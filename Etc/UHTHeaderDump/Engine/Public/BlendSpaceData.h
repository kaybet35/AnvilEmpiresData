#pragma once
#include "CoreMinimal.h"
#include "BlendSpaceSegment.h"
#include "BlendSpaceTriangle.h"
#include "BlendSpaceData.generated.h"

USTRUCT(BlueprintType)
struct FBlendSpaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendSpaceSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendSpaceTriangle> Triangles;
    
    ENGINE_API FBlendSpaceData();
};

