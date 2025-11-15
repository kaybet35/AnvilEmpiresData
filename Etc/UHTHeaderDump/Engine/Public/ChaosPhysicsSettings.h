#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosBufferMode -FallbackName=EChaosBufferMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosSolverTickMode -FallbackName=EChaosSolverTickMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EChaosThreadingMode -FallbackName=EChaosThreadingMode
#include "ChaosPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FChaosPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosThreadingMode DefaultThreadingModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosSolverTickMode DedicatedThreadTickMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosBufferMode DedicatedThreadBufferMode;
    
    FChaosPhysicsSettings();
};

