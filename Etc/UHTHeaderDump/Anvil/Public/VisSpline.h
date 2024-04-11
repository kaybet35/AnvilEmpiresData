#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisSpline.generated.h"

class UVisSplineComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisSpline : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisSplineComponent* SplineScaffoldingComponent;
    
    AVisSpline(const FObjectInitializer& ObjectInitializer);

};

