#pragma once
#include "CoreMinimal.h"
#include "EMappingQueryIssue.h"
#include "MappingQueryIssue.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FMappingQueryIssue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingQueryIssue Issue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* BlockingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* BlockingAction;
    
    ENHANCEDINPUT_API FMappingQueryIssue();
};

