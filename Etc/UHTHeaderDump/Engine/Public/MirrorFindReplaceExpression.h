#pragma once
#include "CoreMinimal.h"
#include "EMirrorFindReplaceMethod.h"
#include "MirrorFindReplaceExpression.generated.h"

USTRUCT(BlueprintType)
struct FMirrorFindReplaceExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FindExpression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceExpression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMirrorFindReplaceMethod::Type> FindReplaceMethod;
    
    ENGINE_API FMirrorFindReplaceExpression();
};

