#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Actor.h"
#include "InstigatedAnyDamageSignatureDelegate.h"
#include "NavAgentInterface.h"
#include "OnPossessedPawnChangedDelegate.h"
#include "Controller.generated.h"

class ACharacter;
class APawn;
class APlayerState;
class UDamageType;
class USceneComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class ENGINE_API AController : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstigatedAnyDamageSignature OnInstigatedAnyDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessedPawnChanged OnPossessedPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Pawn, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachToPawn: 1;
    
public:
    AController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnPossess();
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMoveInput(bool bNewMoveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLookInput(bool bNewLookInput);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotation(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMoveInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreLookInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInputFlags();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnPossess(APawn* UnpossessedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePossess(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Possess(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Pawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LineOfSightTo(const AActor* Other, FVector ViewPoint, bool bAlternateChecks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* K2_GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetViewTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerViewPoint(FVector& Location, FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetControlRotation() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSetRotation(FRotator NewRotation, bool bResetCamera);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSetLocation(FVector NewLocation, FRotator NewRotation);
    

    // Fix for true pure virtual functions not being implemented
};

