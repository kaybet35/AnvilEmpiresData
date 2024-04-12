#pragma once
#include "CoreMinimal.h"
#include "EAnvilConvertedActionType.h"
#include "ProxyComponent.h"
#include "PowerToActionConverterProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UPowerToActionConverterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilConvertedActionType ConversionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerDrainPerAction;
    
    UPowerToActionConverterProxyComponent();

};

