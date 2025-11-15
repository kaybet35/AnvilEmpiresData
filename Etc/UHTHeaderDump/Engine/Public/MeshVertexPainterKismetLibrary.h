#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BlueprintFunctionLibrary.h"
#include "EVertexPaintAxis.h"
#include "MeshVertexPainterKismetLibrary.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshVertexPainterKismetLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& FillColor, bool bConvertToSRGB);
    
    UFUNCTION(BlueprintCallable)
    static void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& StartColor, const FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
    
};

