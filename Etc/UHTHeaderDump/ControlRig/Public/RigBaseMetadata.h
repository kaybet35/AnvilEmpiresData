#pragma once
#include "CoreMinimal.h"
#include "ERigMetadataType.h"
#include "RigBaseMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetadataType Type;
    
public:
    FRigBaseMetadata();
};

