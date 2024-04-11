#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "QuenchingWindow.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UQuenchingWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* QuenchButton;
    
public:
    UQuenchingWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnQuenchButtonClicked();
    
};

