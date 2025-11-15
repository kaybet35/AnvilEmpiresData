#pragma once
#include "CoreMinimal.h"
#include "AnimGroupInfo.h"
#include "Blueprint.h"
#include "Interface_PreviewMeshProvider.h"
#include "AnimBlueprint.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class ENGINE_API UAnimBlueprint : public UBlueprint, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* TargetSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimGroupInfo> Groups;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMultiThreadedAnimationUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnAboutBlueprintUsage;
    
    UAnimBlueprint();


    // Fix for true pure virtual functions not being implemented
};

