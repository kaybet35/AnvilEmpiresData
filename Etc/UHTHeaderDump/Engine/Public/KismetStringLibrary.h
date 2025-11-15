#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ESearchCase -FallbackName=ESearchCase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ESearchDir -FallbackName=ESearchDir
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "BlueprintFunctionLibrary.h"
#include "KismetStringLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UKismetStringLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetStringLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TrimTrailing(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Trim(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToUpper(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToLower(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TimeSecondsToString(float InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StartsWith(const FString& SourceString, const FString& InPrefix, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Split(const FString& SourceString, const FString& InStr, FString& LeftS, FString& RightS, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RightPad(const FString& SourceString, int32 ChCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RightChop(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Right(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Reverse(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable)
    static int32 ReplaceInline(UPARAM(Ref) FString& SourceString, const FString& SearchText, const FString& ReplacementText, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Replace(const FString& SourceString, const FString& From, const FString& To, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> ParseIntoArray(const FString& SourceString, const FString& Delimiter, const bool CullEmptyStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_StriStri(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Mid(const FString& SourceString, int32 Start, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MatchesWildcard(const FString& SourceString, const FString& Wildcard, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Len(const FString& S);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LeftPad(const FString& SourceString, int32 ChCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LeftChop(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Left(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString JoinStringArray(const TArray<FString>& SourceArray, const FString& Separator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNumeric(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSubstring(const FString& SourceString, int32 StartIndex, int32 Length);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterAsNumber(const FString& SourceString, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetCharacterArrayFromString(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindSubstring(const FString& SearchIn, const FString& Substring, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_StriStri(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EndsWith(const FString& SourceString, const FString& InSuffix, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CullArray(const FString& SourceString, TArray<FString>& inArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_VectorToString(FVector InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_Vector3fToString(FVector3f InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_Vector2dToString(FVector2D InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_TransformToString(const FTransform& InTrans);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conv_StringToVector3f(const FString& InString, FVector3f& OutConvertedVector, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conv_StringToVector2D(const FString& InString, FVector2D& OutConvertedVector2D, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conv_StringToVector(const FString& InString, FVector& OutConvertedVector, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conv_StringToRotator(const FString& InString, FRotator& OutConvertedRotator, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Conv_StringToName(const FString& InString);
    
    UFUNCTION(BlueprintPure)
    static int64 Conv_StringToInt64(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_StringToInt(const FString& InString);
    
    UFUNCTION(BlueprintPure)
    static double Conv_StringToDouble(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Conv_StringToColor(const FString& InString, FLinearColor& OutConvertedColor, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_RotatorToString(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_PlatformUserIdToString(FPlatformUserId InPlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ObjectToString(UObject* InObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_NameToString(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_MatrixToString(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_IntVectorToString(FIntVector InIntVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_IntToString(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_IntPointToString(FIntPoint InIntPoint);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_Int64ToString(int64 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_InputDeviceIdToString(FInputDeviceId InDeviceId);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_DoubleToString(double InDouble);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ColorToString(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ByteToString(uint8 InByte);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_BoolToString(bool InBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Contains(const FString& SearchIn, const FString& Substring, bool bUseCase, bool bSearchFromEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Concat_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Vector2d(const FString& AppendTo, const FString& Prefix, FVector2D InVector2D, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Vector(const FString& AppendTo, const FString& Prefix, FVector InVector, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Rotator(const FString& AppendTo, const FString& Prefix, FRotator InRot, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Object(const FString& AppendTo, const FString& Prefix, UObject* InObj, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Name(const FString& AppendTo, const FString& Prefix, FName InName, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_IntVector(const FString& AppendTo, const FString& Prefix, FIntVector InIntVector, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Int(const FString& AppendTo, const FString& Prefix, int32 inInt, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Double(const FString& AppendTo, const FString& Prefix, double InDouble, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Color(const FString& AppendTo, const FString& Prefix, FLinearColor InColor, const FString& Suffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildString_Bool(const FString& AppendTo, const FString& Prefix, bool InBool, const FString& Suffix);
    
};

