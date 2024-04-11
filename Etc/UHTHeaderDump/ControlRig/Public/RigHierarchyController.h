#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigBoneType.h"
#include "RigControlSettings.h"
#include "RigControlValue.h"
#include "RigElementKey.h"
#include "RigMirrorSettings.h"
#include "RigRigidBodySettings.h"
#include "RigHierarchyController.generated.h"

class URigHierarchy;
class USkeleton;

UCLASS(Blueprintable)
class CONTROLRIG_API URigHierarchyController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReportWarningsAndErrors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URigHierarchy> Hierarchy;
    
public:
    URigHierarchyController();

    UFUNCTION(BlueprintCallable)
    bool SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    void SetHierarchy(URigHierarchy* InHierarchy);
    
    UFUNCTION(BlueprintCallable)
    FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo) const;
    
    UFUNCTION(BlueprintCallable)
    bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportFromText(const FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportCurves(USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> ImportBones(USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigHierarchy* GetHierarchy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRigControlSettings GetControlSettings(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportToText(TArray<FRigElementKey> InKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ExportSelectionToText() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectElement(FRigElementKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
    
};

