#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigFloatMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigFloatMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FRigFloatMetadata();
};

