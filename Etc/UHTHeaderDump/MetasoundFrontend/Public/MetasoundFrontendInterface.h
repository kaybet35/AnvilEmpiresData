#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassInterface.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendInterface.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion Version;
    
    FMetasoundFrontendInterface();
};

