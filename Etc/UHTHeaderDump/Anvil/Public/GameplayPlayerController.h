#pragma once
#include "CoreMinimal.h"
#include "AnvilPlayerController.h"
#include "Templates/SubclassOf.h"
#include "GameplayPlayerController.generated.h"

class ARuntimeVirtualTextureVolume;
class USoundCue;

UCLASS(Blueprintable)
class ANVIL_API AGameplayPlayerController : public AAnvilPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CallForReinforcementsCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARuntimeVirtualTextureVolume> LandscapeCullRVTVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARuntimeVirtualTextureVolume* LandscapeCullRVTVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARuntimeVirtualTextureVolume> FoliageCullRVTVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARuntimeVirtualTextureVolume* FoliageCullRVTVolume;
    
public:
    AGameplayPlayerController(const FObjectInitializer& ObjectInitializer);

};

