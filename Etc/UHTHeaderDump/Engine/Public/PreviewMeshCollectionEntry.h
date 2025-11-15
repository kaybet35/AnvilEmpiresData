#pragma once
#include "CoreMinimal.h"
#include "PreviewMeshCollectionEntry.generated.h"

class UAnimBlueprint;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPreviewMeshCollectionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> AnimBlueprint;
    
    ENGINE_API FPreviewMeshCollectionEntry();
};

