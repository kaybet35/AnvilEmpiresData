#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisAnimalVehicle.generated.h"

class UAnimalAIDataComponent;
class UHungerDataComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaminaDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisAnimalVehicle : public AVisVehicle {
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
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SaddleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HalterHeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HalterBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SaddleMeshes;
    
public:
    AVisAnimalVehicle(const FObjectInitializer& ObjectInitializer);

};

