#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "EditorSpawnerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UEditorSpawnerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UEditorSpawnerProxyComponent();

};

