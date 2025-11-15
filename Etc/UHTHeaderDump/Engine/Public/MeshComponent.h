#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PrimitiveComponent.h"
#include "MeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverlayMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayMaterialMaxDrawDistance;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMaterialParameterCaching: 1;
    
public:
    UMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial);
    
    UFUNCTION(BlueprintCallable)
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaterialSlotNameValid(FName MaterialSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetOverlayMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMaterialSlotNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInterface*> GetMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaterialIndex(FName MaterialSlotName) const;
    
};

