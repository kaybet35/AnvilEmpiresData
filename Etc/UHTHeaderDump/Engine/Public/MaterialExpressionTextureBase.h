#pragma once
#include "CoreMinimal.h"
#include "EMaterialSamplerType.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureBase.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMaterialExpressionTextureBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialSamplerType> SamplerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsDefaultMeshpaintTexture: 1;
    
    UMaterialExpressionTextureBase();

};

