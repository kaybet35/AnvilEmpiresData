#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyLakeComponent.generated.h"

class ULakeCollisionComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyLakeComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LakeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    ULakeCollisionComponent* LakeCollision;
    
public:
    UWaterBodyLakeComponent(const FObjectInitializer& ObjectInitializer);

};

