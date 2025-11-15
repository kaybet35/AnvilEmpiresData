#pragma once
#include "CoreMinimal.h"
#include "ActorDataLayer.h"
#include "EDataLayerRuntimeState.h"
#include "EDataLayerState.h"
#include "OnDataLayerRuntimeStateChangedDelegate.h"
#include "WorldSubsystem.h"
#include "DataLayerSubsystem.generated.h"

class UDataLayerAsset;
class UDataLayerInstance;

UCLASS(Blueprintable)
class ENGINE_API UDataLayerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDataLayerRuntimeStateChanged OnDataLayerRuntimeStateChanged;
    
    UDataLayerSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataLayerStateByLabel(const FName& InDataLayerLabel, EDataLayerState InState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataLayerState(const FActorDataLayer& InDataLayer, EDataLayerState InState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataLayerRuntimeStateByLabel(const FName& InDataLayerLabel, EDataLayerRuntimeState InState, bool bInIsRecursive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataLayerRuntimeState(const FActorDataLayer& InDataLayer, EDataLayerRuntimeState InState, bool bInIsRecursive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataLayerInstanceRuntimeState(const UDataLayerAsset* InDataLayerAsset, EDataLayerRuntimeState InState, bool bInIsRecursive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> GetLoadedDataLayerNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerState GetDataLayerStateByLabel(const FName& InDataLayerLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerState GetDataLayerState(const FActorDataLayer& InDataLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerRuntimeStateByLabel(const FName& InDataLayerLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerRuntimeState(const FActorDataLayer& InDataLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerInstanceRuntimeState(const UDataLayerAsset* InDataLayerAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayerInstanceFromAsset(const UDataLayerAsset* InDataLayerAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerInstanceEffectiveRuntimeState(const UDataLayerAsset* InDataLayerAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayerFromName(FName InDataLayerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayerFromLabel(FName InDataLayerLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerEffectiveRuntimeStateByLabel(const FName& InDataLayerLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerEffectiveRuntimeState(const FActorDataLayer& InDataLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayer(const FActorDataLayer& InDataLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> GetActiveDataLayerNames() const;
    
};

