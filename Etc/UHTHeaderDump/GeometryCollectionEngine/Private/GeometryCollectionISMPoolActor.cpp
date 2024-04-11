#include "GeometryCollectionISMPoolActor.h"
#include "GeometryCollectionISMPoolComponent.h"

AGeometryCollectionISMPoolActor::AGeometryCollectionISMPoolActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGeometryCollectionISMPoolComponent>(TEXT("ISMPoolComp"));
    this->ISMPoolComp = (UGeometryCollectionISMPoolComponent*)RootComponent;
}


