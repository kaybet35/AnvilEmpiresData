#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "Vector2MaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FVector2MaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseConstant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantY;
    
    ENGINE_API FVector2MaterialInput();
};

