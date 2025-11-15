#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActorBeginCursorOverSignatureDelegate.h"
#include "ActorBeginOverlapSignatureDelegate.h"
#include "ActorBeginTouchOverSignatureDelegate.h"
#include "ActorDestroyedSignatureDelegate.h"
#include "ActorEndCursorOverSignatureDelegate.h"
#include "ActorEndOverlapSignatureDelegate.h"
#include "ActorEndPlaySignatureDelegate.h"
#include "ActorEndTouchOverSignatureDelegate.h"
#include "ActorHitSignatureDelegate.h"
#include "ActorOnClickedSignatureDelegate.h"
#include "ActorOnInputTouchBeginSignatureDelegate.h"
#include "ActorOnInputTouchEndSignatureDelegate.h"
#include "ActorOnReleasedSignatureDelegate.h"
#include "ActorTickFunction.h"
#include "EActorUpdateOverlapsMethod.h"
#include "EAttachLocation.h"
#include "EAttachmentRule.h"
#include "EAutoReceiveInput.h"
#include "EDetachmentRule.h"
#include "EEndPlayReason.h"
#include "ENetDormancy.h"
#include "ENetRole.h"
#include "ESpawnActorCollisionHandlingMethod.h"
#include "ETickingGroup.h"
#include "HitResult.h"
#include "RepAttachment.h"
#include "RepMovement.h"
#include "TakeAnyDamageSignatureDelegate.h"
#include "TakePointDamageSignatureDelegate.h"
#include "TakeRadialDamageSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "Actor.generated.h"

class AActor;
class AController;
class APawn;
class APlayerController;
class IInterface;
class UInterface;
class UActorComponent;
class UChildActorComponent;
class UDamageType;
class UInputComponent;
class ULevel;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API AActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorTickFunction PrimaryActorTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNetTemporary: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyRelevantToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysRelevant: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicateMovement, meta=(AllowPrivateAccess=true))
    uint8 bReplicateMovement: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCallPreReplication: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCallPreReplicationForReplay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bTearOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceNetAddressable: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bExchangedRoles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNetLoadOnClient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNetUseOwnerRelevancy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRelevantForNetworkReplays: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRelevantForLevelBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplayRewindable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTickBeforeBeginPlay: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroyWhenFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDamaged: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWhenPlacing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFindCameraComponentWhenViewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEventsDuringLevelStreaming: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoresOriginShifting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableAutoLODGeneration: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEditorOnlyActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActorSeamlessTraveled: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicates: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeInCluster: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReceiveTickEventOnDedicatedServer: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateUsingRegisteredSubObjectList: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActorEnableCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bActorIsBeingDestroyed: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAsyncPhysicsTickEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialLifeSpan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTimeDilation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENetRole> RemoteRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingGroupId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachmentReplication, meta=(AllowPrivateAccess=true))
    FRepAttachment AttachmentReplication;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMovement, meta=(AllowPrivateAccess=true))
    FRepMovement ReplicatedMovement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Owner, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetDriverName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENetRole> Role;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENetDormancy> NetDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoReceiveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPriority;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetCullDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetPriority;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Instigator, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Children;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComponent;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LayerS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UChildActorComponent> ParentComponent;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakeAnyDamageSignature OnTakeAnyDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakePointDamageSignature OnTakePointDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakeRadialDamageSignature OnTakeRadialDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBeginOverlapSignature OnActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEndOverlapSignature OnActorEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBeginCursorOverSignature OnBeginCursorOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEndCursorOverSignature OnEndCursorOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorOnClickedSignature OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorOnReleasedSignature OnReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorOnInputTouchBeginSignature OnInputTouchBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorOnInputTouchEndSignature OnInputTouchEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBeginTouchOverSignature OnInputTouchEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEndTouchOverSignature OnInputTouchLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorHitSignature OnActorHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDestroyedSignature OnDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEndPlaySignature OnEndPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> InstanceComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> BlueprintCreatedComponents;
    
    AActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UserConstructionScript();
    
    UFUNCTION(BlueprintCallable)
    void TearOff();
    
    UFUNCTION(BlueprintCallable)
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReplicates(bool bInReplicates);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicateMovement(bool bInReplicateMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingGroupId(int32 InRaytracingGroupId);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(AActor* NewOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeSpan(float InLifespan);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroyWhenFinished(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTickInterval(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetActorScale3D(FVector NewScale3D);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRelativeScale3D(FVector NewRelativeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetActorHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRadialDamage(float DamageReceived, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnReleased(FKey ButtonReleased);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchLeave(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchEnter(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchEnd(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchBegin(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorOnClicked(FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorEndOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorEndCursorOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorBeginCursorOver();
    
    UFUNCTION(BlueprintCallable)
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMovement();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Owner();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Instigator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentReplication();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndViewTarget(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeViewTarget(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* K2_GetRootComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> K2_GetComponentsByClass(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator K2_GetActorRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GetActorLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyActor();
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorTickEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorBeingDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTickableWhenPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSquaredHorizontalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSquaredDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ENetRole> GetRemoteRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRayTracingGroupId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChildActorComponent* GetParentComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetParentActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ENetRole> GetLocalRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLifeSpan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLevelTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevel* GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetInstigatorController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInputVectorAxisValue(const FKey InputAxisKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputAxisValue(const FName InputAxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputAxisKeyValue(const FKey InputAxisKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalDotProductTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameTimeSinceCreation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDotProductTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetComponentsByTag(TSubclassOf<UActorComponent> ComponentClass, FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetComponentsByInterface(TSubclassOf<UInterface> Interface) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAttachParentSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttachParentActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray, bool bRecursivelyIncludeAttachedActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorUpVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorTimeDilation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorScale3D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorRightVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorRelativeScale3D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorEnableCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNetUpdate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FlushNetDormancy();
    
    UFUNCTION(BlueprintCallable)
    void FinishAddComponent(UActorComponent* Component, bool bManualAttachment, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void EnableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DisableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddComponentByClass(TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish);
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, const UObject* ComponentTemplateContext, bool bDeferredFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActorHasTag(FName Tag) const;
    
};

