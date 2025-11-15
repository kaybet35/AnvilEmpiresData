#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "BrushComponent.generated.h"

class UBodySetup;
class UModel;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBrushComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModel* Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* BrushBodySetup;
    
    UBrushComponent(const FObjectInitializer& ObjectInitializer);

};

