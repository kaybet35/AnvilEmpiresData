#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "DestroyableProxyComponent.generated.h"

class UEntityTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UDestroyableProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> DestructionEffectEntity;
    
    UDestroyableProxyComponent();

};

