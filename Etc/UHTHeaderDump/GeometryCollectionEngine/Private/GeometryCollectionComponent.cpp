#include "GeometryCollectionComponent.h"
#include "Net/UnrealNetwork.h"

UGeometryCollectionComponent::UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->ChaosSolverActor = NULL;
    this->RestCollection = NULL;
    this->Simulating = false;
    this->ObjectType = EObjectStateTypeEnum::Chaos_Object_Dynamic;
    this->bForceMotionBlur = false;
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->DamageThreshold.AddDefaulted(3);
    this->bUseSizeSpecificDamageThreshold = false;
    this->bAllowRemovalOnSleep = true;
    this->bAllowRemovalOnBreak = true;
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation;
    this->CollisionGroup = 0;
    this->CollisionSampleFraction = 1.00f;
    this->LinearEtherDrag = 0.00f;
    this->AngularEtherDrag = 0.00f;
    this->PhysicalMaterial = NULL;
    this->InitialVelocityType = EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined;
    this->PhysicalMaterialOverride = NULL;
    this->DesiredCacheTime = 0.00f;
    this->CachePlayback = false;
    this->bNotifyBreaks = false;
    this->bNotifyCollisions = false;
    this->bNotifyTrailing = false;
    this->bNotifyRemovals = false;
    this->bNotifyCrumblings = false;
    this->bCrumblingEventIncludesChildren = false;
    this->bStoreVelocities = false;
    this->bShowBoneColors = false;
    this->ISMPool = NULL;
    this->bEnableReplication = false;
    this->bEnableAbandonAfterLevel = true;
    this->ReplicationAbandonClusterLevel = 0;
    this->ReplicationAbandonAfterLevel = 0;
    this->DummyBodySetup = NULL;
}

void UGeometryCollectionComponent::SetRestCollection(const UGeometryCollection* RestCollectionIn) {
}

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals) {
}

void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings) {
}

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
}

void UGeometryCollectionComponent::RemoveAllAnchors() {
}


void UGeometryCollectionComponent::GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents) {
}

int32 UGeometryCollectionComponent::GetInitialLevel(int32 ItemIndex) {
    return 0;
}

void UGeometryCollectionComponent::CrumbleCluster(int32 ItemIndex) {
}

void UGeometryCollectionComponent::CrumbleActiveClusters() {
}

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UGeometryCollectionComponent::ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity) {
}

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, FVector Position) {
}

void UGeometryCollectionComponent::ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain) {
}

void UGeometryCollectionComponent::ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain) {
}

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity) {
}

void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity) {
}

void UGeometryCollectionComponent::ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity) {
}

void UGeometryCollectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGeometryCollectionComponent, RepData);
}


