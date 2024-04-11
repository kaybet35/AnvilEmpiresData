#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigElementKey.h"
#include "RigElementKeyMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementKeyMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Value;
    
public:
    FRigElementKeyMetadata();
};

