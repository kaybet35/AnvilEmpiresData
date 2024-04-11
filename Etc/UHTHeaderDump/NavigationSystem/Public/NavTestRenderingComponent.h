#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "NavTestRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavTestRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UNavTestRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

