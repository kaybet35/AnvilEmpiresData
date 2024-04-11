#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "MRMeshComponent.generated.h"

class UMRMeshBodyHolder;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MRMESH_API UMRMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WireframeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateMeshProxySections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNavMeshOnMeshUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverCreateCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMRMeshBodyHolder*> BodyHolders;
    
public:
    UMRMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWireframeMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetWireframeColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetUseWireframe(bool bUseWireframe);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMeshOcclusion(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetWireframeColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseWireframe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableMeshOcclusion() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

