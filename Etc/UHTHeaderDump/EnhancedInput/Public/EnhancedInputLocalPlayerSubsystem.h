#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputMappingRebuildType.h"
#include "EMappingQueryIssue.h"
#include "EMappingQueryResult.h"
#include "EnhancedActionKeyMapping.h"
#include "EnhancedInputSubsystemInterface.h"
#include "InputActionValue.h"
#include "MappingQueryIssue.h"
#include "ModifyContextOptions.h"
#include "EnhancedInputLocalPlayerSubsystem.generated.h"

class UInputAction;
class UInputMappingContext;
class UInputModifier;
class UInputTrigger;
class UPlayerMappableInputConfig;

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem, public IEnhancedInputSubsystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlMappingsRebuilt ControlMappingsRebuiltDelegate;
    
    UEnhancedInputLocalPlayerSubsystem();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType) override PURE_VIRTUAL(RequestRebuildControlMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 RemovePlayerMappedKey(const FName MappingName, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemovePlayerMappedKey, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemovePlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemovePlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveMappingContext(const UInputMappingContext* MappingContext, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemoveMappingContext,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveAllPlayerMappedKeys(const FModifyContextOptions& Options) override PURE_VIRTUAL(RemoveAllPlayerMappedKeys,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EMappingQueryResult QueryMapKeyInContextSet(const TArray<UInputMappingContext*>& PrioritizedActiveContexts, const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) override PURE_VIRTUAL(QueryMapKeyInContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EMappingQueryResult QueryMapKeyInActiveContextSet(const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) override PURE_VIRTUAL(QueryMapKeyInActiveContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    TArray<FKey> QueryKeysMappedToAction(const UInputAction* Action) const override PURE_VIRTUAL(QueryKeysMappedToAction, return TArray<FKey>(););
    
    UFUNCTION(BlueprintCallable)
    void InjectInputVectorForAction(const UInputAction* Action, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputVectorForAction,);
    
    UFUNCTION(BlueprintCallable)
    void InjectInputForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool HasMappingContext(const UInputMappingContext* MappingContext, int32& OutFoundPriority) const override PURE_VIRTUAL(HasMappingContext, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FKey GetPlayerMappedKey(const FName MappingName) const override PURE_VIRTUAL(GetPlayerMappedKey, return FKey{};);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings() const override PURE_VIRTUAL(GetAllPlayerMappableActionKeyMappings, return TArray<FEnhancedActionKeyMapping>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ClearAllMappings() override PURE_VIRTUAL(ClearAllMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 AddPlayerMappedKey(const FName MappingName, const FKey NewKey, const FModifyContextOptions& Options) override PURE_VIRTUAL(AddPlayerMappedKey, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddPlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) override PURE_VIRTUAL(AddPlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddMappingContext(const UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options) override PURE_VIRTUAL(AddMappingContext,);
    
};

