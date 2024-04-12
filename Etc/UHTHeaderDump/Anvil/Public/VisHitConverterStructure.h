#pragma once
#include "CoreMinimal.h"
#include "HitConverterItemMeshInfo.h"
#include "VisStructure.h"
#include "VisHitConverterStructure.generated.h"

class UHitConverterDataComponent;
class UNiagaraSystem;
class USceneComponent;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisHitConverterStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitConverterDataComponent* HitConverterDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ConvertedItemMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FHitConverterItemMeshInfo> ItemMeshInfoMap;
    
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

