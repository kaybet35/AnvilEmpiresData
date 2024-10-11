#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAnvilMapId.h"
#include "ProxyComponent.h"
#include "WorldEntranceProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UWorldEntranceProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArrivalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilMapId DestinationMapId;
    
    UWorldEntranceProxyComponent();

};

