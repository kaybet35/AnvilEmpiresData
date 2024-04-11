#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "CraftingWindow.generated.h"

class UCraftingRecipeListWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UCraftingWindow : public UStructureWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftingRecipeListWidget* CraftingRecipeListWidget;
    
public:
    UCraftingWindow();

};

