#pragma once
#include "CoreMinimal.h"
#include "EMaterialParameterAssociation.h"
#include "MaterialParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FMaterialParameterInfo();
};

