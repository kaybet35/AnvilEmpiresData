#pragma once
#include "CoreMinimal.h"
#include "PreviewAttachedObjectPair.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPreviewAttachedObjectPair {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> AttachedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachedTo;
    
    ENGINE_API FPreviewAttachedObjectPair();
};

