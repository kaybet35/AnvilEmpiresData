#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "ERigMetadataType.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_HasMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HasMetadata : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetadataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    FRigUnit_HasMetadata();
};

