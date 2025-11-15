#pragma once
#include "CoreMinimal.h"
#include "StereoLayerShape.h"
#include "StereoLayerShapeCylinder.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UStereoLayerShapeCylinder : public UStereoLayerShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float OverlayArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UStereoLayerShapeCylinder();

    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayArc(float InOverlayArc);
    
    UFUNCTION(BlueprintCallable)
    void SetHeight(int32 InHeight);
    
};

