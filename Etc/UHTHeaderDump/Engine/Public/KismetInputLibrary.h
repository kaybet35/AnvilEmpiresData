#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=AnalogInputEvent -FallbackName=AnalogInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigationAction -FallbackName=EUINavigationAction
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=InputEvent -FallbackName=InputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "BlueprintFunctionLibrary.h"
#include "ESlateGesture.h"
#include "SlateModifierKeysState.h"
#include "KismetInputLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UKismetInputLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetInputLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointerEvent_IsTouchEvent(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointerEvent_IsMouseButtonDown(const FPointerEvent& Input, FKey MouseButton);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PointerEvent_GetWheelDelta(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PointerEvent_GetUserIndex(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PointerEvent_GetTouchpadIndex(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D PointerEvent_GetScreenSpacePosition(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PointerEvent_GetPointerIndex(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D PointerEvent_GetLastScreenSpacePosition(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESlateGesture PointerEvent_GetGestureType(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D PointerEvent_GetGestureDelta(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey PointerEvent_GetEffectingButton(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D PointerEvent_GetCursorDelta(const FPointerEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ModifierKeysState_IsShiftDown(const FSlateModifierKeysState& KeysState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ModifierKeysState_IsControlDown(const FSlateModifierKeysState& KeysState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ModifierKeysState_IsCommandDown(const FSlateModifierKeysState& KeysState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ModifierKeysState_IsAltDown(const FSlateModifierKeysState& KeysState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsVectorAxis(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsValid(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsMouseButton(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsModifierKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsKeyboardKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsGamepadKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsDigital(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsButtonAxis(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsAxis3D(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsAxis2D(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsAxis1D(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsAnalog(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUINavigation Key_GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUINavigation Key_GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUINavigationAction Key_GetNavigationActionFromKey(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUINavigationAction Key_GetNavigationAction(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Key_GetDisplayName(const FKey& Key, bool bLongDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsShiftDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsRightShiftDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsRightControlDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsRightCommandDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsRightAltDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsRepeat(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsLeftShiftDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsLeftControlDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsLeftCommandDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsLeftAltDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsControlDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsCommandDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputEvent_IsAltDown(const FInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText InputChord_GetDisplayName(const FInputChord& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUserIndex(const FKeyEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateModifierKeysState GetModifierKeysState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetKey(const FKeyEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAnalogValue(const FAnalogInputEvent& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_KeyKey(FKey A, FKey B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);
    
    UFUNCTION(BlueprintCallable)
    static void CalibrateTilt();
    
};

