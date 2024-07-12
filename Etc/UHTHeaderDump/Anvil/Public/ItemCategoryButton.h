#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ItemCategoryButton.generated.h"

class UButton;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UItemCategoryButton : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ItemCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedImage;
    
public:
    UItemCategoryButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnItemCategoryButtonClicked();
    
};

