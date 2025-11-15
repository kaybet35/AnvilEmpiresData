#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ELocalizedTextSourceCategory -FallbackName=ELocalizedTextSourceCategory
#include "BlueprintFunctionLibrary.h"
#include "KismetInternationalizationLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetInternationalizationLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLocale(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLanguageAndLocale(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLanguage(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentCulture(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentAssetGroupCulture(const FName AssetGroup, const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSuitableCulture(const TArray<FString>& AvailableCultures, const FString& CultureToMatch, const FString& FallbackCulture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNativeCulture(const ELocalizedTextSourceCategory TextCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentLocale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentAssetGroupCulture(const FName AssetGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCultureDisplayName(const FString& Culture, const bool Localized);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCurrentAssetGroupCulture(const FName AssetGroup, const bool SaveToConfig);
    
};

