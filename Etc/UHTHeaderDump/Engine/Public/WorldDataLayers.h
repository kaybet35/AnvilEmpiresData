#pragma once
#include "CoreMinimal.h"
#include "EDataLayerRuntimeState.h"
#include "Info.h"
#include "WorldDataLayers.generated.h"

class UDEPRECATED_DataLayer;
class UDataLayerInstance;

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API AWorldDataLayers : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDataLayerInstance*> DataLayerInstances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UDataLayerInstance>> DeprecatedDataLayerNameToDataLayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDEPRECATED_DataLayer*> WorldDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveDataLayerNames, meta=(AllowPrivateAccess=true))
    TArray<FName> RepActiveDataLayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LoadedDataLayerNames, meta=(AllowPrivateAccess=true))
    TArray<FName> RepLoadedDataLayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EffectiveActiveDataLayerNames, meta=(AllowPrivateAccess=true))
    TArray<FName> RepEffectiveActiveDataLayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EffectiveLoadedDataLayerNames, meta=(AllowPrivateAccess=true))
    TArray<FName> RepEffectiveLoadedDataLayerNames;
    
public:
    AWorldDataLayers(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedDataLayerNames();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectiveLoadedDataLayerNames();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectiveActiveDataLayerNames();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveDataLayerNames();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDataLayerRuntimeStateChanged(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState);
    
};

