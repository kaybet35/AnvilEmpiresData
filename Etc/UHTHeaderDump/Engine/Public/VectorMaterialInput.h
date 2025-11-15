#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "MaterialInput.h"
#include "VectorMaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FVectorMaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseConstant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f Constant;
    
    ENGINE_API FVectorMaterialInput();
};

