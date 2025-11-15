#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "MaterialInstance.h"
#include "MaterialParameterInfo.h"
#include "MaterialInstanceDynamic.generated.h"

class UMaterialInterface;
class URuntimeVirtualTexture;
class UTexture;

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UMaterialInstanceDynamic : public UMaterialInstance {
    GENERATED_BODY()
public:
    UMaterialInstanceDynamic();

    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterValue(FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetScalarParameterByIndex(int32 ParameterIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeVirtualTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, URuntimeVirtualTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeVirtualTextureParameterValue(FName ParameterName, URuntimeVirtualTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDoubleVectorParameterValue(FName ParameterName, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeScalarParameterAndGetIndex(const FName& ParameterName, float Value, int32& OutParameterIndex);
    
    UFUNCTION(BlueprintCallable)
    void CopyParameterOverrides(UMaterialInstance* MaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void CopyInterpParameters(UMaterialInstance* Source);
    
};

