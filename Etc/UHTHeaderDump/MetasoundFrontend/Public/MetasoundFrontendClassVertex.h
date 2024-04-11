#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMetasoundFrontendVertexAccessType.h"
#include "MetasoundFrontendVertex.h"
#include "MetasoundFrontendClassVertex.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetasoundFrontendVertexAccessType AccessType;
    
    FMetasoundFrontendClassVertex();
};

