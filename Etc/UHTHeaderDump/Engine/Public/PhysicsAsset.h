#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPhysicsAssetSolverType.h"
#include "Interface_PreviewMeshProvider.h"
#include "PhysicsAssetSolverSettings.h"
#include "SolverIterations.h"
#include "PhysicsAsset.generated.h"

class UBodySetup;
class UPhysicsConstraintTemplate;
class USkeletalBodySetup;
class UThumbnailInfo;

UCLASS(Blueprintable, MinimalAPI, PerObjectConfig, Config=Game)
class UPhysicsAsset : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoundsBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalBodySetup*> SkeletalBodySetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintTemplate*> ConstraintSetup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsAssetSolverSettings SolverSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverIterations SolverIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicsAssetSolverType SolverType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotForDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThumbnailInfo* ThumbnailInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBodySetup*> BodySetup;
    
public:
    UPhysicsAsset();


    // Fix for true pure virtual functions not being implemented
};

