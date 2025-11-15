#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "StaticComponentMaskParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticComponentMaskParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool A;
    
    ENGINE_API FStaticComponentMaskParameter();
};

