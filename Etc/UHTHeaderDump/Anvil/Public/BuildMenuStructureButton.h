#pragma once
#include "CoreMinimal.h"
#include "GridItemWidget.h"
#include "BuildMenuStructureButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBuildMenuStructureButton : public UGridItemWidget {
    GENERATED_BODY()
public:
    UBuildMenuStructureButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnBuild(UGridItemWidget* ItemSlot);
    
};

