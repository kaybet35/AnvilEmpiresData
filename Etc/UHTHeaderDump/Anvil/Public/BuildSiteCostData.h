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
    
    ANVIL_API FBuildSiteCostData();
};

