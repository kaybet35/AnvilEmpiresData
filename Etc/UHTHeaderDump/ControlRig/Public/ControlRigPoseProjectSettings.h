#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigPoseProjectSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class CONTROLRIG_API UControlRigPoseProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> RootSaveDirs;
    
    UControlRigPoseProjectSettings();

};

