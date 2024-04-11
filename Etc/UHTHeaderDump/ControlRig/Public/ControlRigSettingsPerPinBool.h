#pragma once
#include "CoreMinimal.h"
#include "ControlRigSettingsPerPinBool.generated.h"

USTRUCT(BlueprintType)
struct FControlRigSettingsPerPinBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Values;
    
    CONTROLRIG_API FControlRigSettingsPerPinBool();
};

