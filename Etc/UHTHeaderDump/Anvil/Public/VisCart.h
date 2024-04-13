#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisCart.generated.h"

class UAnimalAIDataComponent;
class UHungerDataComponent;
class USkeletalMeshComponent;
class UStaminaDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisCart : public AVisVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHungerDataComponent* HungerDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaminaDataComponent* StaminaDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimalAIDataComponent* AnimalAIDataComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeatSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HorseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SaddleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CartMesh;
    
public:
    AVisCart(const FObjectInitializer& ObjectInitializer);

};

