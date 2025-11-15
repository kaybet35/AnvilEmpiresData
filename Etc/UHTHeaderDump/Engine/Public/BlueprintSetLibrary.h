#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "BlueprintSetLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UBlueprintSetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintSetLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetSetPropertyByName(UObject* Object, FName PropertyName, const TSet<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void Set_Union(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    
    UFUNCTION(BlueprintCallable)
    static void Set_ToArray(const TSet<int32>& A, TArray<int32>& Result);
    
    UFUNCTION(BlueprintCallable)
    static void Set_RemoveItems(const TSet<int32>& TargetSet, const TArray<int32>& Items);
    
    UFUNCTION(BlueprintCallable)
    static bool Set_Remove(const TSet<int32>& TargetSet, const int32& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Set_Length(const TSet<int32>& TargetSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Set_IsNotEmpty(const TSet<int32>& TargetSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Set_IsEmpty(const TSet<int32>& TargetSet);
    
    UFUNCTION(BlueprintCallable)
    static void Set_Intersection(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    
    UFUNCTION(BlueprintCallable)
    static void Set_Difference(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Set_Contains(const TSet<int32>& TargetSet, const int32& ItemToFind);
    
    UFUNCTION(BlueprintCallable)
    static void Set_Clear(const TSet<int32>& TargetSet);
    
    UFUNCTION(BlueprintCallable)
    static void Set_AddItems(const TSet<int32>& TargetSet, const TArray<int32>& NewItems);
    
    UFUNCTION(BlueprintCallable)
    static void Set_Add(const TSet<int32>& TargetSet, const int32& NewItem);
    
};

