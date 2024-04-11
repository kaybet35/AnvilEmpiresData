#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendClassInput.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendLiteral DefaultLiteral;
    
    FMetasoundFrontendClassInput();
};

