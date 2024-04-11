#pragma once
#include "CoreMinimal.h"
#include "VisBuildSite.h"
#include "VisSplineBuildSite.generated.h"

class UVisSplineComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisSplineBuildSite : public AVisBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisSplineComponent* SplineComponent;
    
    AVisSplineBuildSite(const FObjectInitializer& ObjectInitializer);

};

