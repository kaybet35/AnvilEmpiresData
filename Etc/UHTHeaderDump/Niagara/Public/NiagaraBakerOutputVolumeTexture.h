#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraBakerTextureSource.h"
#include "NiagaraBakerOutputVolumeTexture.generated.h"

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraBakerTextureSource SourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateAtlas: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateFrames: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExportFrames: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AtlasAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FramesAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FramesExportPathFormat;
    
    UNiagaraBakerOutputVolumeTexture();

};

