#pragma once
#include "CoreMinimal.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
#include "MaterialLayersFunctions.h"
#include "MaterialExpressionMaterialAttributeLayers.generated.h"

class UMaterialExpressionMaterialFunctionCall;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLayersFunctions DefaultLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumActiveLayerCallers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumActiveBlendCallers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLayerGraphBuilt;
    
    UMaterialExpressionMaterialAttributeLayers();

};

