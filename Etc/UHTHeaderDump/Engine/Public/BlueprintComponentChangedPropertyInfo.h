#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentChangedPropertyInfo.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintComponentChangedPropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* PropertyScope;
    
    FBlueprintComponentChangedPropertyInfo();
};

