#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.h"
#include "EBuildSiteVisibility.h"
#include "GeneratedScorchEffectInfo.h"
#include "VisActor.h"
#include "VisStructure.generated.h"

class UArrowComponent;
class UCollapsibleDataComponent;
class UDecalComponent;
class UDecayDataComponent;
class UGrassRemovalVolumeComponent;
class UHealthDataComponent;
class UNiagaraSystem;
class UScorchDataComponent;
class UStructureDataComponent;
class UTeamDataComponent;
class UTexture2D;
class UUpgradeDataComponent;
class UVisScaffoldingComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisStructure : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisScaffoldingComponent* ScaffoldingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StructureIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildSiteCategory BuildSiteCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildSiteOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildSiteVisibility BuildSiteVisibility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SupportedVisualComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradeDataComponent* UpgradeDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthDataComponent* HealthDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamDataComponent* TeamDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStructureDataComponent* StructureDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollapsibleDataComponent* CollapsibleDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScorchDataComponent* ScorchDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecayDataComponent* DecayDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* UseVolumeDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrassRemovalVolumeComponent* GrassRemovalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> ScorchEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedScorchEffectInfo> GeneratedScorchEffecftInfos;
    
public:
    AVisStructure(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateVisualComponentsByTag(const FName Tag, const bool bIsVisible, const bool bUpdateMaterials);
    
};

