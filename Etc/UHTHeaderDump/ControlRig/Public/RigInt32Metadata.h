#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigInt32Metadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigInt32Metadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FRigInt32Metadata();
};

