#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RelicTechProgressWidget.generated.h"

class UImage;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URelicTechProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* TechProgressBar;
    
public:
    URelicTechProgressWidget();

private:
    UFUNCTION(BlueprintCallable)
    bool IsImageEnabled();
    
    UFUNCTION(BlueprintCallable)
    float GetNormalizedProgress();
    
};

