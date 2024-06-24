#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BuildSiteCostData.generated.h"

USTRUCT(BlueprintType)
struct FBuildSiteCostData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RoadMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ResourceBranches;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedWood;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedStone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedIron;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ReinforcedWood;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ResourceFibre;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AnimalFat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AnimalBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedLeather;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ResourceStoneFragments;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedWoodHard;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Nails;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Mortar;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Gravel;
    
    ANVIL_API FBuildSiteCostData();
};

