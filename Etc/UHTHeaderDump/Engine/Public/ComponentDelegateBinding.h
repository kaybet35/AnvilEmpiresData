#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentDelegateBinding.h"
#include "DynamicBlueprintBinding.h"
#include "ComponentDelegateBinding.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UComponentDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings;
    
    UComponentDelegateBinding();

};

