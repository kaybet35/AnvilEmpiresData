#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "StructureProtectionProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UStructureProtectionProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappedFoundationDamageMitigation;
    
    UStructureProtectionProxyComponent();

};

