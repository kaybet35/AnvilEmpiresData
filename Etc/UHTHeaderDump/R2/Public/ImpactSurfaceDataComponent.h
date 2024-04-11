#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilPhysicalSurfaceType.h"
#include "ImpactSurfaceDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UImpactSurfaceDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilPhysicalSurfaceType HitSurface;
    
    UImpactSurfaceDataComponent(const FObjectInitializer& ObjectInitializer);

};

