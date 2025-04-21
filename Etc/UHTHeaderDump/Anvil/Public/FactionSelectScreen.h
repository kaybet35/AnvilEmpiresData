#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "FactionSelectScreen.generated.h"

class UAnvilButtonWidget;
class UButton;
class UCheckBox;
class UHorizontalBox;
class UTextBlock;
class UThrobber;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UFactionSelectScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionAranicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AranicAtCapacityText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionMirrishButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MirrishAtCapacityText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionNovanButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NovanAtCapacityText;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FactionAtCapacityColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* FactionSelectSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* FactionLockedSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionLockedAranicButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionLockedMirrishButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FactionLockedNovanButton;
    
public:
    UFactionSelectScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedFactionButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionNovanButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionMirrishButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionAranicButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteProfileButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedFactionButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsDeleteProfileButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDevModeWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDeleteProfileButtonVisibility();
    
};

