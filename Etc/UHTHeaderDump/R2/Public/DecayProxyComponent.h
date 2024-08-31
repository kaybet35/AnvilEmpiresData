#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "DecayProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UDecayProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelayHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDecayPreventionFromTown;
    
    UDecayProxyComponent();

};

