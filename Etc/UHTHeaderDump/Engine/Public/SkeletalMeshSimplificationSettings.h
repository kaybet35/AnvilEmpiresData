#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SkeletalMeshSimplificationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMeshReductionModuleName;
    
    USkeletalMeshSimplificationSettings();

};

