#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "HousingProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHousingProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayerCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForCampsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGroupHouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresCeilingCheck;
    
    UHousingProxyComponent();

};

