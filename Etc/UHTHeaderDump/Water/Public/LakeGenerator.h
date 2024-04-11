#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "LakeGenerator.generated.h"

class UBoxComponent;
class ULakeCollisionComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UDEPRECATED_LakeGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LakeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LakeCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    ULakeCollisionComponent* LakeCollision;
    
    UDEPRECATED_LakeGenerator();

};

