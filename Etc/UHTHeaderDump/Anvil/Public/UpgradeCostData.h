#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "UpgradeCostData.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeCostData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedWood;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedStone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedIron;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Silver;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ReinforcedWood;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AnimalFat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AnimalBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ProcessedLeather;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Mortar;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Gravel;
    
    ANVIL_API FUpgradeCostData();
};

