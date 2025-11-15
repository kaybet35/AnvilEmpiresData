#pragma once
#include "CoreMinimal.h"
#include "ECustomMaterialOutputType.h"
#include "CustomOutput.generated.h"

USTRUCT(BlueprintType)
struct FCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomMaterialOutputType> OutputType;
    
    ENGINE_API FCustomOutput();
};

