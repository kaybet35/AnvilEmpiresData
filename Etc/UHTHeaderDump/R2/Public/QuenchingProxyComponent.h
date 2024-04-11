#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "QuenchingProxyComponent.generated.h"

class UItemTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UQuenchingProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> QuenchingResource;
    
    UQuenchingProxyComponent();

};

