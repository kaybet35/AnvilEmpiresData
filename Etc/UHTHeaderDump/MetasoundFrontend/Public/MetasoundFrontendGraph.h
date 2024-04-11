#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendEdge.h"
#include "MetasoundFrontendNode.h"
#include "MetasoundFrontendVariable.h"
#include "MetasoundFrontendGraph.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendNode> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendEdge> Edges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVariable> Variables;
    
    FMetasoundFrontendGraph();
};

