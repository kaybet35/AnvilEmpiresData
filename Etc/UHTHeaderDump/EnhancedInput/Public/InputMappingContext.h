#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EnhancedActionKeyMapping.h"
#include "InputMappingContext.generated.h"

class UInputAction;

UCLASS(Blueprintable, Config=Input)
class ENHANCEDINPUT_API UInputMappingContext : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancedActionKeyMapping> Mappings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextDescription;
    
    UInputMappingContext();

    UFUNCTION(BlueprintCallable)
    void UnmapKey(const UInputAction* Action, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAllKeysFromAction(const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAll();
    
    UFUNCTION(BlueprintCallable)
    void UnmapAction(const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    FEnhancedActionKeyMapping MapKey(const UInputAction* Action, FKey ToKey);
    
};

