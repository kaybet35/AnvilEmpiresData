#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "OpeningScreen.generated.h"

class UAnvilButtonWidget;
class UButton;
class UDisclaimerWidget;
class UNextTestWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOpeningScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* PlayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ExitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* OptionsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* VersionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CLText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNextTestWidget* NextTestWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDisclaimerWidget* DisclaimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AnnouncementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DiscordRoleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DevModeButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SelectedShardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ShardSelectorButton;
    
public:
    UOpeningScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVersionText();
    
    UFUNCTION(BlueprintCallable)
    void ReenableDiscordRoleButton();
    
    UFUNCTION(BlueprintCallable)
    void OnShardSelectorButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnOptionsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnExitButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDiscordRoleButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDevModeButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsDiscordRoleButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    FText GetSelectedShardText();
    
    UFUNCTION(BlueprintCallable)
    FText GetAnnouncementText();
    
};

