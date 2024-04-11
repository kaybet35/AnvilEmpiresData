#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilAnimalState -FallbackName=EAnvilAnimalState
#include "VisActor.h"
#include "VisAnimal.generated.h"

class UAnimMontage;
class UAnimalAIDataComponent;
class UCapsuleComponent;
class UHealthDataComponent;
class USkeletalMeshComponent;
class USoundCue;

UCLASS(Blueprintable)
class ANVIL_API AVisAnimal : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimalAIDataComponent* AnimalAIDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthDataComponent* HealthDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilAnimalState, UAnimMontage*> CurrentStateMontageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* TelegraphSoundQueue;
    
public:
    AVisAnimal(const FObjectInitializer& ObjectInitializer);

};

