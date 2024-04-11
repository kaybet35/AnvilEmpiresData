#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
#include "IKRigSkeleton.h"
#include "RetargetDefinition.h"
#include "IKRigDefinition.generated.h"

class UIKRigEffectorGoal;
class UIKRigSolver;
class USkeletalMesh;

UCLASS(Blueprintable)
class IKRIG_API UIKRigDefinition : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigSkeleton Skeleton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIKRigEffectorGoal*> Goals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIKRigSolver*> Solvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetDefinition RetargetDefinition;
    
public:
    UIKRigDefinition();


    // Fix for true pure virtual functions not being implemented
};

