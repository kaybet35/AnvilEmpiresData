#pragma once
#include "CoreMinimal.h"
#include "GridItemWidget.h"
#include "BuildMenuStructureButton.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBuildMenuStructureButton : public UGridItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TownAreaIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FamilyAreaIconImage;
    
public:
    UBuildMenuStructureButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnBuild(UGridItemWidget* ItemSlot);
    
};

