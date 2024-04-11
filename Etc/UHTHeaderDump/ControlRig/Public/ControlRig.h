#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMRuntimeSettings -FallbackName=RigVMRuntimeSettings
#include "ControlRigDrawContainer.h"
#include "EControlRigState.h"
#include "ERigExecutionType.h"
#include "RigControlElement.h"
#include "RigControlElementCustomization.h"
#include "RigElementKey.h"
#include "RigHierarchySettings.h"
#include "RigInfluenceMapPerEvent.h"
#include "Templates/SubclassOf.h"
#include "ControlRig.generated.h"

class AActor;
class UAnimationDataSourceRegistry;
class UAssetUserData;
class UControlRig;
class UControlRigShapeLibrary;
class URigHierarchy;
class URigVM;
class UTransformableControlHandle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CONTROLRIG_API UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnControlSelectedBPControlRig, EnterPropertyName, UControlRig*, Rig, const FRigControlElement&, Control, bool, bSelected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERigExecutionType ExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigHierarchySettings HierarchySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMRuntimeSettings VMRuntimeSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVM* VM;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, URigVM*> InitializedVMSnapshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigHierarchy* DynamicHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> InputProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> OutputProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigDrawContainer DrawContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> EventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* InteractionRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> InteractionRigClass;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlSelectedBP OnControlSelected_BP;
    
public:
    UControlRig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsEvent(const FName& InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVariableFromString(const FName& InVariableName, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintCallable)
    void SetFramesPerSecond(float InFramesPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SelectControl(const FName& InControlName, bool bSelect);
    
    UFUNCTION(BlueprintCallable)
    void RequestInit();
    
    UFUNCTION(BlueprintCallable)
    void RequestConstruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlSelected(const FName& InControlName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigVM* GetVM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVariableType(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVariableAsString(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSupportedEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetScriptAccessibleVariables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* GetInteractionRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHostingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigHierarchy* GetHierarchy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFramesPerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UControlRig*> FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteEvent(const FName& InEventName);
    
    UFUNCTION(BlueprintCallable)
    bool Execute(const EControlRigState State, const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> CurrentControlSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTransformableControlHandle* CreateTransformableControlHandle(UObject* Outer, const FName& ControlName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsEvent(const FName& InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecute() const;
    

    // Fix for true pure virtual functions not being implemented
};

