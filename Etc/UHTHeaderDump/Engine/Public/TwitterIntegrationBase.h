#pragma once
#include "CoreMinimal.h"
#include "ETwitterRequestMethod.h"
#include "PlatformInterfaceBase.h"
#include "TwitterIntegrationBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTwitterIntegrationBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UTwitterIntegrationBase();

    UFUNCTION(BlueprintCallable)
    bool TwitterRequest(const FString& URL, const TArray<FString>& ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int32 AccountIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ShowTweetUI(const FString& InitialMessage, const FString& URL, const FString& Picture);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumAccounts();
    
    UFUNCTION(BlueprintCallable)
    FString GetAccountName(int32 AccountIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanShowTweetUI();
    
    UFUNCTION(BlueprintCallable)
    bool AuthorizeAccounts();
    
};

