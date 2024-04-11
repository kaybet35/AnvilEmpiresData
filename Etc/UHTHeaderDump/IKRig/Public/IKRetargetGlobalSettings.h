#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RetargetGlobalSettings.h"
#include "IKRetargetGlobalSettings.generated.h"

UCLASS(Blueprintable)
class IKRIG_API UIKRetargetGlobalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetGlobalSettings Settings;
    
    UIKRetargetGlobalSettings();

};

