#include "GeometryCollectionActor.h"
#include "GeometryCollectionComponent.h"

AGeometryCollectionActor::AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollectionComponent0"));
    this->GeometryCollectionComponent = (UGeometryCollectionComponent*)RootComponent;
    this->GeometryCollectionDebugDrawComponent = NULL;
}

bool AGeometryCollectionActor::RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const {
    return false;
}


