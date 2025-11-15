#pragma once
#include "CoreMinimal.h"
#include "SkeletonToMeshLinkup.generated.h"

USTRUCT(BlueprintType)
struct FSkeletonToMeshLinkup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkeletonToMeshTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MeshToSkeletonTable;
    
    ENGINE_API FSkeletonToMeshLinkup();
};

