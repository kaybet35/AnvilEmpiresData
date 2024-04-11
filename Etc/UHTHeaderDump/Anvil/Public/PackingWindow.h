#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "PackingWindow.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UPackingWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PackButton;
    
public:
    UPackingWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnPackButtonClicked();
    
};

