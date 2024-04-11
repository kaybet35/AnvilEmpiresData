#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigFloatArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigFloatArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Value;
    
public:
    FRigFloatArrayMetadata();
};

