#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassEnvironmentVariable.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassEnvironmentVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequired;
    
    FMetasoundFrontendClassEnvironmentVariable();
};

