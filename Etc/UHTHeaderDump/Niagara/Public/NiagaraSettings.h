#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ENDICollisionQuery_AsyncGpuTraceProvider.h"
#include "ENDISkelMesh_AdjacencyTriangleIndexFormat.h"
#include "ENDISkelMesh_GpuMaxInfluences.h"
#include "ENDISkelMesh_GpuUniformSamplingFormat.h"
#include "ENiagaraDefaultGpuTranslucentLatency.h"
#include "ENiagaraDefaultRendererMotionVectorSetting.h"
#include "ENiagaraDefaultRendererPixelCoverageMode.h"
#include "ENiagaraDefaultSortPrecision.h"
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraPlatformSetRedirect.h"
#include "NiagaraSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemsSupportLargeWorldCoordinates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceStrictStackTypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExperimentalVMEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PositionPinTypeColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> QualityLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> ComponentRendererWarningsPerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuBufferFormat DefaultGridFormat;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDefaultSortPrecision DefaultSortPrecision;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLightInverseExposureBlend;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences::Type> NDISkelMesh_GpuMaxInfluences;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat::Type> NDISkelMesh_GpuUniformSamplingFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type> NDISkelMesh_AdjacencyTriangleIndexFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NDIStaticMesh_AllowDistanceFields;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>> NDICollisionQuery_AsyncGpuTraceProviderOrder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPlatformSetRedirect> PlatformSetRedirects;
    
    UNiagaraSettings();

};

