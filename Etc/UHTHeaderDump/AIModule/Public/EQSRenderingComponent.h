#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "EQSRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UEQSRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UEQSRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

