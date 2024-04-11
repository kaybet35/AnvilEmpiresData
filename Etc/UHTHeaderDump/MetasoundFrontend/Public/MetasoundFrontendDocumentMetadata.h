#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendDocumentMetadata.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendDocumentMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion Version;
    
    FMetasoundFrontendDocumentMetadata();
};

