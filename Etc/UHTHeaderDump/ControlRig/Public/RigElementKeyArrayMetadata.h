#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigElementKey.h"
#include "RigElementKeyArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementKeyArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Value;
    
public:
    FRigElementKeyArrayMetadata();
};

