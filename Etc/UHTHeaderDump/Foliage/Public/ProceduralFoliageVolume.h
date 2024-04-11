#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionActorLoaderInterface -FallbackName=WorldPartitionActorLoaderInterface
#include "ProceduralFoliageVolume.generated.h"

class UProceduralFoliageComponent;

UCLASS(Blueprintable)
class FOLIAGE_API AProceduralFoliageVolume : public AVolume, public IWorldPartitionActorLoaderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralFoliageComponent* ProceduralComponent;
    
    AProceduralFoliageVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

