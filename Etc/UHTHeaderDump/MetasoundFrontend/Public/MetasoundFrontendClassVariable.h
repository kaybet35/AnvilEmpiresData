#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendClassVariable.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendLiteral DefaultLiteral;
    
    FMetasoundFrontendClassVariable();
};

