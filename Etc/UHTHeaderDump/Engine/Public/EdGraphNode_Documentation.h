#pragma once
#include "CoreMinimal.h"
#include "EdGraphNode.h"
#include "EdGraphNode_Documentation.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEdGraphNode_Documentation : public UEdGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Excerpt;
    
    UEdGraphNode_Documentation();

};

