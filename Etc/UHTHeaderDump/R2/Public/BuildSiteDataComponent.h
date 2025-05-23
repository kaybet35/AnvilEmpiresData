#pragma once
#include "CoreMinimal.h"
#include "BuildSitePlacementInfo.h"
#include "ContextfulPlacementStatus.h"
#include "DataComponent.h"
#include "BuildSiteDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UBuildSiteDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialSubmissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContextfulPlacementStatus> BuildGhostPlacementErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildSitePlacementInfo PlacementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualGuideMinDistance;
    
    UBuildSiteDataComponent(const FObjectInitializer& ObjectInitializer);

};

