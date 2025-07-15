#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "R2ConfigArea.h"
#include "R2ConfigBuildSite.h"
#include "R2ConfigCombustion.h"
#include "R2ConfigItem.h"
#include "R2ConfigSignPost.h"
#include "R2ConfigTradeResources.h"
#include "R2ConfigProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UR2ConfigProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigBuildSite BuildSite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigCombustion Combustion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigSignPost SignPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigTradeResources TradeResourcesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2ConfigItem Item;
    
    UR2ConfigProxyComponent();

};

