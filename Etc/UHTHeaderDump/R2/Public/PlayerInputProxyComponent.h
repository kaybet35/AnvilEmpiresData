#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "PlayerInputProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UPlayerInputProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPanDeadzoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPanMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPanLerpAlphaPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMousePositionNormalizedEdgePanThreshold;
    
    UPlayerInputProxyComponent();

};

