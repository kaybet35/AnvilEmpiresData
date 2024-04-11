#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequence -FallbackName=LevelSequence
#include "ControlRigSequence.generated.h"

class UAnimSequence;
class USkeletalMesh;

UCLASS(Blueprintable)
class CONTROLRIG_API UControlRigSequence : public ULevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastExportedFrameRate;
    
    UControlRigSequence();

};

