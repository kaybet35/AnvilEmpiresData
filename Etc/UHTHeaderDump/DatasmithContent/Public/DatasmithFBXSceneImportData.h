#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithFBXSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLightmapUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TexturesDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IntermediateSerialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorizeMaterials;
    
    UDatasmithFBXSceneImportData();

};

