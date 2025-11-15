#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SceneComponentInstanceData.h"
#include "PrimitiveComponentInstanceData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct ENGINE_API FPrimitiveComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ComponentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibilityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LODParent;
    
public:
    FPrimitiveComponentInstanceData();
};

