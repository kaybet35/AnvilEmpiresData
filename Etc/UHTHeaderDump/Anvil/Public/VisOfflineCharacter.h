#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisOfflineCharacter.generated.h"

class UArmorDataComponent;
class UCapsuleComponent;
class UHealthDataComponent;
class UOfflineCharacterDataComponent;
class USkeletalMeshComponent;
class USoundCue;
class UTeamDataComponent;
class UVisPlayerVisualsComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisOfflineCharacter : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOfflineCharacterDataComponent* OfflineCharacterDataComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeathCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisPlayerVisualsComponent* PlayerVisualsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthDataComponent* HealthDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamDataComponent* TeamDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorDataComponent* ArmourDataComponent;
    
public:
    AVisOfflineCharacter(const FObjectInitializer& ObjectInitializer);

};

