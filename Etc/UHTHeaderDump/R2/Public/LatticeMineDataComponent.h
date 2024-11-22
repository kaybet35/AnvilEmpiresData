#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "MineChunk.h"
#include "LatticeMineDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API ULatticeMineDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshVisibilityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMineChunk> MineChunks;
    
    ULatticeMineDataComponent(const FObjectInitializer& ObjectInitializer);

};

