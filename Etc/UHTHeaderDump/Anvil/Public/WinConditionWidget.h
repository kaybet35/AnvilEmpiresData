#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WinConditionWidget.generated.h"

class UHeaderContainer;
class UProgressBar;
class UTextBlock;
class UTooltipWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWinConditionWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* HeaderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction0MilitaryProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction1MilitaryProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction2MilitaryProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction0MilitaryTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction1MilitaryTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction2MilitaryTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction0CultureProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction1CultureProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction2CultureProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction0CultureTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction1CultureTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Faction2CultureTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction0CultureTimerProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction1CultureTimerProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Faction2CultureTimerProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ProgressBarNormalColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ProgressBarVictoryAchievedColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTooltipWidget* CachedWinConditionTooltip;
    
public:
    UWinConditionWidget();

private:
    UFUNCTION(BlueprintCallable)
    FText GetFaction2MilitaryText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction2MilitaryProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction2MilitaryProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction2CultureTimerProgress();
    
    UFUNCTION(BlueprintCallable)
    FText GetFaction2CultureText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction2CultureProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction2CultureProgress();
    
    UFUNCTION(BlueprintCallable)
    FText GetFaction1MilitaryText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction1MilitaryProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction1MilitaryProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction1CultureTimerProgress();
    
    UFUNCTION(BlueprintCallable)
    FText GetFaction1CultureText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction1CultureProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction1CultureProgress();
    
    UFUNCTION(BlueprintCallable)
    FText GetFaction0MilitaryText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction0MilitaryProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction0MilitaryProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction0CultureTimerProgress();
    
    UFUNCTION(BlueprintCallable)
    FText GetFaction0CultureText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetFaction0CultureProgressBarColour();
    
    UFUNCTION(BlueprintCallable)
    float GetFaction0CultureProgress();
    
};

