#pragma once
#include "CoreMinimal.h"
#include "EAnvilDamageType.h"
#include "ProxyComponent.h"
#include "PassiveDamageProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UPassiveDamageProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilDamageType DamageType;
    
    UPassiveDamageProxyComponent();

};

