#pragma once
#include "CoreMinimal.h"
#include "EdGraphSchemaAction.h"
#include "EdGraphSchemaAction_NewNode.generated.h"

class UEdGraphNode;

USTRUCT(BlueprintType)
struct ENGINE_API FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdGraphNode* NodeTemplate;
    
    FEdGraphSchemaAction_NewNode();
};

