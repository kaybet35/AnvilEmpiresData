#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "R2ConfigBuildSite.h"
#include "R2ConfigCombustion.h"
#include "R2ConfigSignPost.h"
#include "R2ConfigProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UR2ConfigProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigBuildSite BuildSite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigCombustion Combustion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigSignPost SignPost;
    
    UR2ConfigProxyComponent();

};

