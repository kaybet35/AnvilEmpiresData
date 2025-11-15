#pragma once
#include "CoreMinimal.h"
#include "CompositeReroute.generated.h"

class UMaterialExpressionReroute;

USTRUCT(BlueprintType)
struct FCompositeReroute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionReroute* Expression;
    
    ENGINE_API FCompositeReroute();
};

