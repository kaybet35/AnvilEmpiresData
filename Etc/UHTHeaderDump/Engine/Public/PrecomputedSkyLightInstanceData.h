#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SceneComponentInstanceData.h"
#include "PrecomputedSkyLightInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LightGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AverageBrightness;
    
    ENGINE_API FPrecomputedSkyLightInstanceData();
};

