#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendEdgeStyle.h"
#include "MetasoundFrontendGraphStyle.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendGraphStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGraphEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendEdgeStyle> EdgeStyles;
    
    FMetasoundFrontendGraphStyle();
};

