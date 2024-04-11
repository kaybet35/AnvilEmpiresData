#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HUDNameWidget.generated.h"

class AVisActor;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHUDNameWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisActor* TargetVisActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LocalChatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalChatTextLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor NameTypeColourList[5];
    
public:
    UHUDNameWidget();

protected:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetPlayerNameVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetPlayerNameText();
    
    UFUNCTION(BlueprintCallable)
    FSlateColor GetPlayerNameColour();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetLocalChatTextVisibility();
    
};

