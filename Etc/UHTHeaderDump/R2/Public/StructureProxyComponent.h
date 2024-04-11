#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildLocationType.h"
#include "EAnvilBuildStructureType.h"
#include "ProxyComponent.h"
#include "StructureProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UStructureProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotBeDismantled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilBuildStructureType StructureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilBuildLocationType BuiltLocation;
    
    UStructureProxyComponent();

};

