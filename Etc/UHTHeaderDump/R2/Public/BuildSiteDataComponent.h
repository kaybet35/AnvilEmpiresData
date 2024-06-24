#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "BuildSiteDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UBuildSiteDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NearbyPlayersRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialSubmissions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BuildGhostPlacementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlacementInfoFlags;
    
    UBuildSiteDataComponent(const FObjectInitializer& ObjectInitializer);

};

