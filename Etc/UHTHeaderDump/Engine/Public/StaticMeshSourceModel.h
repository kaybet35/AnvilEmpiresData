#pragma once
#include "CoreMinimal.h"
#include "MeshBuildSettings.h"
#include "MeshReductionSettings.h"
#include "PerPlatformFloat.h"
#include "StaticMeshSourceModel.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshSourceModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBuildSettings BuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshReductionSettings ReductionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat ScreenSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceImportFilename;
    
    ENGINE_API FStaticMeshSourceModel();
};

