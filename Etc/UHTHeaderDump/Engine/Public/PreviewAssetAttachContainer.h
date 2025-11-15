#pragma once
#include "CoreMinimal.h"
#include "PreviewAttachedObjectPair.h"
#include "PreviewAssetAttachContainer.generated.h"

USTRUCT(BlueprintType)
struct FPreviewAssetAttachContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviewAttachedObjectPair> AttachedObjects;
    
public:
    ENGINE_API FPreviewAssetAttachContainer();
};

