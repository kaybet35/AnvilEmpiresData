#pragma once
#include "CoreMinimal.h"
#include "RigCurrentAndInitialTransform.h"
#include "RigElementKey.h"
#include "RigElementWeight.h"
#include "RigHierarchyCopyPasteContentPerElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigHierarchyCopyPasteContentPerElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementWeight> ParentWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigCurrentAndInitialTransform Pose;
    
    FRigHierarchyCopyPasteContentPerElement();
};

