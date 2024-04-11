#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "ControlRigComponentDelegateDelegate.h"
#include "ControlRigComponentMappedBone.h"
#include "ControlRigComponentMappedComponent.h"
#include "ControlRigComponentMappedCurve.h"
#include "ControlRigComponentMappedElement.h"
#include "EControlRigComponentSpace.h"
#include "ERigElementType.h"
#include "Templates/SubclassOf.h"
#include "ControlRigComponent.generated.h"

class UControlRig;
class UControlRigComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONTROLRIG_API UControlRigComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPreInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPostInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPreConstructionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPostConstructionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPreForwardsSolveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigComponentDelegate OnPostForwardsSolveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigComponentMappedElement> UserDefinedElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigComponentMappedElement> MappedElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLazyEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazyEvaluationPositionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazyEvaluationRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazyEvaluationScaleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTransformBeforeTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetInitialsBeforeConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateRigOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugDrawing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* ControlRig;
    
public:
    UControlRigComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectBinding(UObject* InObjectToBind);
    
    UFUNCTION(BlueprintCallable)
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetControlVector2D(FName ControlName, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRigClass(TSubclassOf<UControlRig> InControlRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlInt(FName ControlName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlFloat(FName ControlName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlBool(FName ControlName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreInitialize(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreForwardsSolve(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreConstruction(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostInitialize(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostForwardsSolve(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostConstruction(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetElementNames(ERigElementType ElementType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetControlVector2D(FName ControlName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* GetControlRig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControlInt(FName ControlName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControlFloat(FName ControlName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlBool(FName ControlName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    
    UFUNCTION(BlueprintCallable)
    void ClearMappedElements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecute();
    
    UFUNCTION(BlueprintCallable)
    void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

