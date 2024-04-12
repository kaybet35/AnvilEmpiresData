#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisHitConverterStructure.generated.h"

class UHitConverterDataComponent;
class UMaterial;
class UNiagaraSystem;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundCue;

UCLASS(Blueprintable)
class ANVIL_API AVisHitConverterStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitConverterDataComponent* HitConverterDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ConvertedItemMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USkeletalMesh*> ConvertedItemMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* ConvertedItemMeshMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HitVFXLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitSuccessVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitFailVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HitSuccessSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HitFailSoundCue;
    
public:
    AVisHitConverterStructure(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHitConverterCounterChanged(const float& Old, const float& New);
    
};

