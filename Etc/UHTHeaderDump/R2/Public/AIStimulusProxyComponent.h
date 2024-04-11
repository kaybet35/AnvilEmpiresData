#pragma once
#include "CoreMinimal.h"
#include "EAnvilStimulusType.h"
#include "ProxyComponent.h"
#include "AIStimulusProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UAIStimulusProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilStimulusType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAgroTarget;
    
    UAIStimulusProxyComponent();

};

