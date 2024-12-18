#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "FactionSelectScreen.generated.h"

class UAnvilButtonWidget;
class UButton;
class UCheckBox;
class UHorizontalBox;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class UFactionSelectScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionAranicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionMirrishButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionNovanButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* DeleteProfileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* DownloadingThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* ServerBrowserCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ServerBrowserHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* EditorSpawnCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* EditorSpawnHorizontalBox;
    
public:
    UFactionSelectScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFactionNovanButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionMirrishButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionAranicButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteProfileButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsFactionNovanButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsFactionMirrishButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsFactionAranicButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsDeleteProfileButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDevModeWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDeleteProfileButtonVisibility();
    
};

