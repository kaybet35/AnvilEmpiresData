#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "StorehouseWindow.generated.h"

class UButton;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UStorehouseWindow : public UStructureWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PublicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FamilyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PrivateButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StorehouseExpireTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StorehouseExpireTimePanel;
    
public:
    UStorehouseWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnPublicButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPrivateButtonClicked();
    
};

