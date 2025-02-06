#pragma once
#include "CoreMinimal.h"
#include "EAnvilSignPostVisualType.h"
#include "ProxyComponent.h"
#include "SignPostProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API USignPostProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilSignPostVisualType VisualType;
    
    USignPostProxyComponent();

};

