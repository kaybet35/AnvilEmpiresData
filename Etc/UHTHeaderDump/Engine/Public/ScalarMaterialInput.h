#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "ScalarMaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FScalarMaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseConstant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Constant;
    
    ENGINE_API FScalarMaterialInput();
};

