#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "PreviewCollectionInterface.h"
#include "PreviewMeshCollectionEntry.h"
#include "PreviewMeshCollection.generated.h"

class USkeleton;

UCLASS(Blueprintable, MinimalAPI)
class UPreviewMeshCollection : public UDataAsset, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviewMeshCollectionEntry> SkeletalMeshes;
    
    UPreviewMeshCollection();


    // Fix for true pure virtual functions not being implemented
};

