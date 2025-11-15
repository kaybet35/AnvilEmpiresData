#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BlueprintFunctionLibrary.h"
#include "KismetGuidLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UKismetGuidLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetGuidLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Parse_StringToGuid(const FString& GuidString, FGuid& OutGuid, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GuidGuid(const FGuid& A, const FGuid& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid NewGuid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_Guid(const FGuid& InGuid);
    
    UFUNCTION(BlueprintCallable)
    static void Invalidate_Guid(UPARAM(Ref) FGuid& InGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_GuidGuid(const FGuid& A, const FGuid& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_GuidToString(const FGuid& InGuid);
    
};

