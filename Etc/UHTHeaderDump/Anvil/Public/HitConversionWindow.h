#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "HitConversionWindow.generated.h"

class UButton;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHitConversionWindow : public UStructureWindow {
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
    UHitConversionWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OutputPreviousButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OutputNextButtonClicked();
    
};
