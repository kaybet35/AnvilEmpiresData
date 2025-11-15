#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintTypeConversions.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UBlueprintTypeConversions : public UObject {
    GENERATED_BODY()
public:
    UBlueprintTypeConversions();

    UFUNCTION(BlueprintCallable)
    static TSet<int32> ConvertSetType(const TSet<int32>& InSet);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, int32> ConvertMapType(const TMap<int32, int32>& InMap);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector4fToFVector4d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector4dToFVector4f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector3fToFVector3d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector3dToFVector3f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector2fToFVector2d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFVector2dToFVector2f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFTransform3fToFTransform3d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFTransform3dToFTransform3f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFRotator3fToFRotator3d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFRotator3dToFRotator3f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFQuat4fToFQuat4d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFQuat4dToFQuat4f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFPlane4fToFPlane4d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFPlane4dToFPlane4f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFMatrix44fToFMatrix44d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFMatrix44dToFMatrix44f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFBox2fToFBox2d(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvertFBox2dToFBox2f(int32 InFromData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ConvertArrayType(const TArray<int32>& inArray);
    
};

