#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigBoolMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBoolMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    FRigBoolMetadata();
};

