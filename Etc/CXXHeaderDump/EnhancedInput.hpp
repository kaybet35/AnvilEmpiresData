#ifndef UE4SS_SDK_EnhancedInput_HPP
#define UE4SS_SDK_EnhancedInput_HPP

#include "EnhancedInput_enums.hpp"

struct FBlueprintEnhancedInputActionBinding
{
    class UInputAction* InputAction;                                                  // 0x0000 (size: 0x8)
    ETriggerEvent TriggerEvent;                                                       // 0x0008 (size: 0x1)
    FName FunctionNameToBind;                                                         // 0x000C (size: 0x8)

}; // Size: 0x18

struct FBlueprintInputDebugKeyDelegateBinding
{
    FInputChord InputChord;                                                           // 0x0000 (size: 0x20)
    TEnumAsByte<EInputEvent> InputKeyEvent;                                           // 0x0020 (size: 0x1)
    FName FunctionNameToBind;                                                         // 0x0024 (size: 0x8)
    bool bExecuteWhenPaused;                                                          // 0x002C (size: 0x1)

}; // Size: 0x30

struct FEnhancedActionKeyMapping
{
    FPlayerMappableKeyOptions PlayerMappableOptions;                                  // 0x0000 (size: 0x40)
    TArray<class UInputTrigger*> Triggers;                                            // 0x0040 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0050 (size: 0x10)
    class UInputAction* Action;                                                       // 0x0060 (size: 0x8)
    FKey Key;                                                                         // 0x0068 (size: 0x18)
    uint8 bIsPlayerMappable;                                                          // 0x0080 (size: 0x1)
    uint8 bShouldBeIgnored;                                                           // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FInjectedInputArray
{
}; // Size: 0x10

struct FInputActionInstance
{
    class UInputAction* SourceAction;                                                 // 0x0000 (size: 0x8)
    ETriggerEvent TriggerEvent;                                                       // 0x0013 (size: 0x1)
    float LastTriggeredWorldTime;                                                     // 0x0014 (size: 0x4)
    TArray<class UInputTrigger*> Triggers;                                            // 0x0018 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0028 (size: 0x10)
    float ElapsedProcessedTime;                                                       // 0x0058 (size: 0x4)
    float ElapsedTriggeredTime;                                                       // 0x005C (size: 0x4)

}; // Size: 0x60

struct FInputActionValue
{
}; // Size: 0x20

struct FInputComboStepData
{
    class UInputAction* ComboStepAction;                                              // 0x0000 (size: 0x8)
    float TimeToPressKey;                                                             // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMappingQueryIssue
{
    EMappingQueryIssue Issue;                                                         // 0x0000 (size: 0x1)
    class UInputMappingContext* BlockingContext;                                      // 0x0008 (size: 0x8)
    class UInputAction* BlockingAction;                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModifyContextOptions
{
    uint8 bIgnoreAllPressedKeysUntilRelease;                                          // 0x0000 (size: 0x1)
    uint8 bForceImmediately;                                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FPlayerMappableKeyOptions
{
    class UObject* MetaData;                                                          // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FText DisplayName;                                                                // 0x0010 (size: 0x18)
    FText DisplayCategory;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

class IEnhancedInputSubsystemInterface : public IInterface
{

    void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);
    int32 RemovePlayerMappedKey(const FName MappingName, const FModifyContextOptions& Options);
    void RemovePlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options);
    void RemoveMappingContext(const class UInputMappingContext* MappingContext, const FModifyContextOptions& Options);
    void RemoveAllPlayerMappedKeys(const FModifyContextOptions& Options);
    EMappingQueryResult QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, const class UInputMappingContext* InputContext, const class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    EMappingQueryResult QueryMapKeyInActiveContextSet(const class UInputMappingContext* InputContext, const class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    TArray<FKey> QueryKeysMappedToAction(const class UInputAction* Action);
    void InjectInputVectorForAction(const class UInputAction* Action, FVector Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void InjectInputForAction(const class UInputAction* Action, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    bool HasMappingContext(const class UInputMappingContext* MappingContext, int32& OutFoundPriority);
    FKey GetPlayerMappedKey(const FName MappingName);
    TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
    void ClearAllMappings();
    int32 AddPlayerMappedKey(const FName MappingName, const FKey NewKey, const FModifyContextOptions& Options);
    void AddPlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options);
    void AddMappingContext(const class UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options);
}; // Size: 0x28

class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionValueBindings;            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEnhancedInputComponent : public UInputComponent
{

    FInputActionValue GetBoundActionValue(const class UInputAction* Action);
}; // Size: 0x160

class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    FPerPlatformSettings PlatformSettings;                                            // 0x0038 (size: 0x10)
    bool bShouldOnlyTriggerLastActionInChord;                                         // 0x0048 (size: 0x1)

}; // Size: 0x50

class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{

    void RequestRebuildControlMappingsUsingContext(const class UInputMappingContext* Context, bool bForceImmediately);
    FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType);
    FInputActionValue MakeInputActionValue(double X, double Y, double Z, const FInputActionValue& MatchValueType);
    FInputActionValue GetBoundActionValue(class AActor* Actor, const class UInputAction* Action);
    FString Conv_InputActionValueToString(FInputActionValue ActionValue);
    bool Conv_InputActionValueToBool(FInputActionValue InValue);
    FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);
    FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);
    double Conv_InputActionValueToAxis1D(FInputActionValue InValue);
    void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type);
}; // Size: 0x28

class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FEnhancedInputLocalPlayerSubsystemControlMappingsRebuiltDelegate ControlMappingsRebuiltDelegate; // 0x01D0 (size: 0x10)
    void OnControlMappingsRebuilt();

}; // Size: 0x1E0

class UEnhancedInputPlatformData : public UObject
{
    TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects; // 0x0028 (size: 0x50)

    class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);
}; // Size: 0x78

class UEnhancedInputPlatformSettings : public UPlatformSettings
{
    TArray<TSoftClassPtr<UEnhancedInputPlatformData>> InputData;                      // 0x0040 (size: 0x10)
    TArray<class TSubclassOf<UEnhancedInputPlatformData>> InputDataClasses;           // 0x0050 (size: 0x10)
    bool bShouldLogMappingContextRedirects;                                           // 0x0060 (size: 0x1)

}; // Size: 0x68

class UEnhancedPlayerInput : public UPlayerInput
{
    TMap<UInputMappingContext*, int32> AppliedInputContexts;                          // 0x0498 (size: 0x50)
    TArray<FEnhancedActionKeyMapping> EnhancedActionMappings;                         // 0x04E8 (size: 0x10)
    TMap<class UInputAction*, class FInputActionInstance> ActionInstanceData;         // 0x0548 (size: 0x50)
    TMap<class FKey, class FVector> KeysPressedThisTick;                              // 0x0638 (size: 0x50)
    TMap<class UInputAction*, class FInjectedInputArray> InputsInjectedThisTick;      // 0x0688 (size: 0x50)
    TSet<UInputAction*> LastInjectedActions;                                          // 0x06D8 (size: 0x50)

}; // Size: 0x740

class UInputAction : public UDataAsset
{
    FText ActionDescription;                                                          // 0x0030 (size: 0x18)
    bool bConsumeInput;                                                               // 0x0048 (size: 0x1)
    bool bTriggerWhenPaused;                                                          // 0x0049 (size: 0x1)
    bool bReserveAllMappings;                                                         // 0x004A (size: 0x1)
    EInputActionValueType ValueType;                                                  // 0x004B (size: 0x1)
    TArray<class UInputTrigger*> Triggers;                                            // 0x0050 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0060 (size: 0x10)

}; // Size: 0x70

class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UInputMappingContext : public UDataAsset
{
    TArray<FEnhancedActionKeyMapping> Mappings;                                       // 0x0030 (size: 0x10)
    FText ContextDescription;                                                         // 0x0040 (size: 0x18)

    void UnmapKey(const class UInputAction* Action, FKey Key);
    void UnmapAllKeysFromAction(const class UInputAction* Action);
    void UnmapAll();
    void UnmapAction(const class UInputAction* Action);
    FEnhancedActionKeyMapping MapKey(const class UInputAction* Action, FKey ToKey);
}; // Size: 0x58

class UInputModifier : public UObject
{

    FInputActionValue ModifyRaw(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);
    FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);
}; // Size: 0x28

class UInputModifierDeadZone : public UInputModifier
{
    float LowerThreshold;                                                             // 0x0028 (size: 0x4)
    float UpperThreshold;                                                             // 0x002C (size: 0x4)
    EDeadZoneType Type;                                                               // 0x0030 (size: 0x1)

}; // Size: 0x38

class UInputModifierFOVScaling : public UInputModifier
{
    float FOVScale;                                                                   // 0x0028 (size: 0x4)
    EFOVScalingType FOVScalingType;                                                   // 0x002C (size: 0x1)

}; // Size: 0x30

class UInputModifierNegate : public UInputModifier
{
    bool bX;                                                                          // 0x0028 (size: 0x1)
    bool bY;                                                                          // 0x0029 (size: 0x1)
    bool bZ;                                                                          // 0x002A (size: 0x1)

}; // Size: 0x30

class UInputModifierResponseCurveExponential : public UInputModifier
{
    FVector CurveExponent;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

class UInputModifierResponseCurveUser : public UInputModifier
{
    class UCurveFloat* ResponseX;                                                     // 0x0028 (size: 0x8)
    class UCurveFloat* ResponseY;                                                     // 0x0030 (size: 0x8)
    class UCurveFloat* ResponseZ;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UInputModifierScalar : public UInputModifier
{
    FVector Scalar;                                                                   // 0x0028 (size: 0x18)

}; // Size: 0x40

class UInputModifierScaleByDeltaTime : public UInputModifier
{
}; // Size: 0x28

class UInputModifierSmooth : public UInputModifier
{
}; // Size: 0x58

class UInputModifierSwizzleAxis : public UInputModifier
{
    EInputAxisSwizzle Order;                                                          // 0x0028 (size: 0x1)

}; // Size: 0x30

class UInputModifierToWorldSpace : public UInputModifier
{
}; // Size: 0x28

class UInputTrigger : public UObject
{
    float ActuationThreshold;                                                         // 0x0028 (size: 0x4)
    bool bShouldAlwaysTick;                                                           // 0x002C (size: 0x1)
    FInputActionValue LastValue;                                                      // 0x0030 (size: 0x20)

    ETriggerState UpdateState(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
    bool IsActuated(const FInputActionValue& ForValue);
    ETriggerType GetTriggerType();
}; // Size: 0x50

class UInputTriggerChordAction : public UInputTrigger
{
    class UInputAction* ChordAction;                                                  // 0x0050 (size: 0x8)

}; // Size: 0x58

class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
}; // Size: 0x58

class UInputTriggerCombo : public UInputTrigger
{
    int32 CurrentComboStepIndex;                                                      // 0x0050 (size: 0x4)
    float CurrentTimeBetweenComboSteps;                                               // 0x0054 (size: 0x4)
    TArray<FInputComboStepData> ComboActions;                                         // 0x0058 (size: 0x10)
    TArray<class UInputAction*> CancelActions;                                        // 0x0068 (size: 0x10)

}; // Size: 0x78

class UInputTriggerDown : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerHold : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;                                                          // 0x005C (size: 0x4)
    bool bIsOneShot;                                                                  // 0x0060 (size: 0x1)

}; // Size: 0x68

class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;                                                          // 0x0058 (size: 0x4)

}; // Size: 0x60

class UInputTriggerPressed : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerPulse : public UInputTriggerTimedBase
{
    bool bTriggerOnStart;                                                             // 0x005C (size: 0x1)
    float Interval;                                                                   // 0x0060 (size: 0x4)
    int32 TriggerLimit;                                                               // 0x0064 (size: 0x4)

}; // Size: 0x68

class UInputTriggerReleased : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerTap : public UInputTriggerTimedBase
{
    float TapReleaseTimeThreshold;                                                    // 0x0058 (size: 0x4)

}; // Size: 0x60

class UInputTriggerTimedBase : public UInputTrigger
{
    float HeldDuration;                                                               // 0x0050 (size: 0x4)
    bool bAffectedByTimeDilation;                                                     // 0x0054 (size: 0x1)

}; // Size: 0x58

class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
    FName ConfigName;                                                                 // 0x0030 (size: 0x8)
    FText ConfigDisplayName;                                                          // 0x0038 (size: 0x18)
    bool bIsDeprecated;                                                               // 0x0050 (size: 0x1)
    class UObject* MetaData;                                                          // 0x0058 (size: 0x8)
    TMap<UInputMappingContext*, int32> Contexts;                                      // 0x0060 (size: 0x50)

    void ResetToDefault();
    bool IsDeprecated();
    TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();
    class UObject* GetMetadata();
    TMap<UInputMappingContext*, int32> GetMappingContexts();
    FEnhancedActionKeyMapping GetMappingByName(const FName MappingName);
    TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(const class UInputAction* InAction);
    FText GetDisplayName();
    FName GetConfigName();
}; // Size: 0xB0

#endif
