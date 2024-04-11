#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigBoolArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBoolArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Value;
    
public:
    FRigBoolArrayMetadata();
};

