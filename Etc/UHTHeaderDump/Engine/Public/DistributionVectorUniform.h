#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DistributionVector.h"
#include "EDistributionVectorLockFlags.h"
#include "EDistributionVectorMirrorFlags.h"
#include "DistributionVectorUniform.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorUniform : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockAxes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseExtremes: 1;
    
    UDistributionVectorUniform();

};

