#pragma once
#include "CoreMinimal.h"
#include "EAnvilUnderworldModuleEdgeType.h"
#include "ProxyComponent.h"
#include "UnderworldModuleProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UUnderworldModuleProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAnvilUnderworldModuleEdgeType> EdgeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDynamicModulesMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDynamicModulesMax;
    
    UUnderworldModuleProxyComponent();

};

