#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GeometryCollectionISMPoolActor.generated.h"

class UGeometryCollectionISMPoolComponent;

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionISMPoolActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGeometryCollectionISMPoolComponent* ISMPoolComp;
    
public:
    AGeometryCollectionISMPoolActor(const FObjectInitializer& ObjectInitializer);

};

