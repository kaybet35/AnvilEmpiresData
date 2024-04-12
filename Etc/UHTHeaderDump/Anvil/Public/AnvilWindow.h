#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "AnvilWindow.generated.h"

class UButton;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CurrentSelectedOutputImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* OutputPreviousButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* OutputNextButton;
    
public:
    UAnvilWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OutputPreviousButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OutputNextButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentSelectedOutputIndexChanged(const uint8& Old, const uint8& New);
    
};

