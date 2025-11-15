#pragma once
#include "CoreMinimal.h"
#include "BPVariableMetaDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FBPVariableMetaDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataValue;
    
    ENGINE_API FBPVariableMetaDataEntry();
};

