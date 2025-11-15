#pragma once
#include "CoreMinimal.h"
#include "MaterialSpriteElement.h"
#include "PrimitiveComponent.h"
#include "MaterialBillboardComponent.generated.h"

class UCurveFloat;
class UMaterialInterface;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMaterialBillboardComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSpriteElement> Elements;
    
    UMaterialBillboardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetElements(const TArray<FMaterialSpriteElement>& NewElements);
    
    UFUNCTION(BlueprintCallable)
    void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);
    
};

