#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendVertexLiteral.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendVertexLiteral {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid VertexID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendLiteral Value;
    
    METASOUNDFRONTEND_API FMetasoundFrontendVertexLiteral();
};

