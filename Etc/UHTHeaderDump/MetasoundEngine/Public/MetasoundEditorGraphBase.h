#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraph -FallbackName=EdGraph
#include "MetasoundEditorGraphBase.generated.h"

UCLASS(Abstract, Blueprintable)
class METASOUNDENGINE_API UMetasoundEditorGraphBase : public UEdGraph {
    GENERATED_BODY()
public:
    UMetasoundEditorGraphBase();

};

