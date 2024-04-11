#pragma once
#include "CoreMinimal.h"
#include "RigElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FRigElement();
};

