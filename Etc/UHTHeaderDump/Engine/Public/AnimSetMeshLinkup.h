#pragma once
#include "CoreMinimal.h"
#include "AnimSetMeshLinkup.generated.h"

USTRUCT(BlueprintType)
struct FAnimSetMeshLinkup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneToTrackTable;
    
    ENGINE_API FAnimSetMeshLinkup();
};

