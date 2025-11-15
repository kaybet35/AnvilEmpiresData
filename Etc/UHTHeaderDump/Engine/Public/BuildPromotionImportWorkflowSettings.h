#pragma once
#include "CoreMinimal.h"
#include "EditorImportWorkflowDefinition.h"
#include "BuildPromotionImportWorkflowSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionImportWorkflowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition Diffuse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition Normal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition ReimportStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition BlendShapeMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition MorphMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition Animation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition Sound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorImportWorkflowDefinition SurroundSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport;
    
    ENGINE_API FBuildPromotionImportWorkflowSettings();
};

