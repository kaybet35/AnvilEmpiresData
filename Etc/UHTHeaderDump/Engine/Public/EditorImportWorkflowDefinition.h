#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "ImportFactorySettingValues.h"
#include "EditorImportWorkflowDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorImportWorkflowDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath ImportFilePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportFactorySettingValues> FactorySettings;
    
    ENGINE_API FEditorImportWorkflowDefinition();
};

