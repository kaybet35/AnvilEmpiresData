#pragma once
#include "CoreMinimal.h"
#include "EStreamingVolumeUsage.h"
#include "Volume.h"
#include "LevelStreamingVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ALevelStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StreamingLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEditorPreVisOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;
    
    ALevelStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

