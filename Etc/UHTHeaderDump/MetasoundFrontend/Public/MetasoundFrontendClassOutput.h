#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendClassOutput.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    FMetasoundFrontendClassOutput();
};

