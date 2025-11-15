#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldComposition.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API UWorldComposition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> TilesStreaming;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TilesStreamingTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadAllTilesDuringCinematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebaseOriginIn3DSpace;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebaseOriginDistance;
    
    UWorldComposition();

};

