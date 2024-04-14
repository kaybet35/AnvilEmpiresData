#pragma once
#include "CoreMinimal.h"
#include "EAnvilAccessibilityType.h"
#include "ProxyComponent.h"
#include "TeamProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTeamProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilAccessibilityType Accessibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysAllowAccessWhenScorched;
    
    UTeamProxyComponent();

};

