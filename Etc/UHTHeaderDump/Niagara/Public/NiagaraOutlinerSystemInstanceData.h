#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETickingGroup -FallbackName=ETickingGroup
#include "ENCPoolMethod.h"
#include "ENiagaraExecutionState.h"
#include "ENiagaraGpuComputeTickStage.h"
#include "NiagaraOutlinerEmitterInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraScalabilityState.h"
#include "NiagaraOutlinerSystemInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerSystemInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f LWCTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState ActualExecutionState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState RequestedExecutionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraScalabilityState ScalabilityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPendingKill: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsingCullProxy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENCPoolMethod PoolMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AverageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETickingGroup> TickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENiagaraGpuComputeTickStage::Type> GpuTickStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSolo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresDistanceFieldData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresDepthBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresEarlyViewData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresViewUniformBuffer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresRayTracingScene: 1;
    
    NIAGARA_API FNiagaraOutlinerSystemInstanceData();
};

