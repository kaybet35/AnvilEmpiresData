#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BasedMovementInfo.h"
#include "CharacterMoveResponsePackedBits.h"
#include "CharacterMovementUpdatedSignatureDelegate.h"
#include "CharacterReachedApexSignatureDelegate.h"
#include "CharacterServerMovePackedBits.h"
#include "EMovementMode.h"
#include "HitResult.h"
#include "LandedSignatureDelegate.h"
#include "MovementModeChangedSignatureDelegate.h"
#include "Pawn.h"
#include "RepRootMotionMontage.h"
#include "RootMotionMovementParams.h"
#include "RootMotionSourceGroup.h"
#include "SimulatedRootMotionReplicatedMove.h"
#include "Vector_NetQuantize10.h"
#include "Vector_NetQuantize100.h"
#include "Vector_NetQuantizeNormal.h"
#include "Character.generated.h"

class UAnimMontage;
class UCapsuleComponent;
class UCharacterMovementComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ENGINE_API ACharacter : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasedMovementInfo BasedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedBasedMovement, meta=(AllowPrivateAccess=true))
    FBasedMovementInfo ReplicatedBasedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AnimRootMotionTranslationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat BaseRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedServerLastTransformUpdateTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplayLastTransformUpdateTimeStamp, meta=(AllowPrivateAccess=true))
    float ReplayLastTransformUpdateTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInBaseReplication;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchedEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCrouched, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouched: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bProxyIsJumpForceApplied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPressedJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientUpdating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientWasFalling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientResimulateRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientResimulateRootMotionSources: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSimGravityDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bClientCheckEncroachmentOnNetUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bServerMoveIgnoreRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasJumping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpKeyHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpForceTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProxyJumpForceStartedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float JumpMaxHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 JumpMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpCurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpCurrentCountPreJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterReachedApexSignature OnReachedJumpApex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandedSignature LandedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeChangedSignature MovementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMovementUpdatedSignature OnCharacterMovementUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionSourceGroup SavedRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionMovementParams ClientRootMotionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RootMotion, meta=(AllowPrivateAccess=true))
    FRepRootMotionMontage RepRootMotion;
    
    ACharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnCrouch(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void StopJumping();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMovePacked(const FCharacterServerMovePackedBits& PackedBits);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RootMotionDebugClientPrintOnScreen(const FString& InString);
    
    UFUNCTION(BlueprintCallable)
    float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RootMotion();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedBasedMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCrouched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateCustomMovement(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    void Jump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRootMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingNetworkedRootMotionMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpProvidingForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyRootMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBaseTranslationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBaseRotationOffsetRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimRootMotionTranslationScale() const;
    
    UFUNCTION(BlueprintCallable)
    void Crouch(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void ClientMoveResponsePacked(const FCharacterMoveResponsePackedBits& PackedBits);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatWalk();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatGhost();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatFly();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAckGoodMove(float Timestamp);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJumpInternal() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
    
};

