#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PolyglotTextData -FallbackName=PolyglotTextData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlueprintFunctionLibrary.h"
#include "ERoundingMode.h"
#include "FormatArgumentData.h"
#include "KismetTextLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UKismetTextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetTextLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextTrimTrailing(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextTrimPrecedingAndTrailing(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextTrimPreceding(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextToUpper(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextToLower(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextIsTransient(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextIsFromStringTable(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextIsEmpty(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextIsCultureInvariant(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextFromStringTable(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText PolyglotDataToText(const FPolyglotTextData& PolyglotData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_TextText(const FText& A, const FText& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsPolyglotDataValid(const FPolyglotTextData& PolyglotData, bool& IsValid, FText& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetEmptyText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Format(FText InPattern, TArray<FFormatArgumentData> InArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindTextInLocalizationTable(const FString& Namespace, const FString& Key, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_TextText(const FText& A, const FText& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_VectorToText(FVector InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_Vector2dToText(FVector2D InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_TransformToText(const FTransform& InTrans);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_TextToString(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_StringToText(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_RotatorToText(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_ObjectToText(UObject* InObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_NameToText(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_ColorToText(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_ByteToText(uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_BoolToText(bool InBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTimeZoneTime_DateTime(const FDateTime& InDateTime, const FString& InTimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTimeZoneDateTime_DateTime(const FDateTime& InDateTime, const FString& InTimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTimeZoneDate_DateTime(const FDateTime& InDateTime, const FString& InTimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTimespan_Timespan(const FTimespan& InTimespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsTime_DateTime(const FDateTime& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsDateTime_DateTime(const FDateTime& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsDate_DateTime(const FDateTime& InDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsCurrencyBase(int32 BaseValue, const FString& CurrencyCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsCurrency_Integer(int32 Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const FString& CurrencyCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const FString& CurrencyCode);
    
};

