#pragma once
#include "CoreMinimal.h"
#include "GridItemWidget.h"
#include "BuildMenuTabButton.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBuildMenuTabButton : public UGridItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedImage;
    
public:
    UBuildMenuTabButton();

};

