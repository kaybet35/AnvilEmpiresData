#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigControlValueStorage.h"
#include "RigControlValue.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlValueStorage FloatStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Storage;
    
public:
    FRigControlValue();
};

