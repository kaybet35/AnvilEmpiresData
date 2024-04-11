#ifndef UE4SS_SDK_Constraints_HPP
#define UE4SS_SDK_Constraints_HPP

#include "Constraints_enums.hpp"

struct FConstraintAndActiveChannel
{
    TSoftObjectPtr<UTickableConstraint> Constraint;                                   // 0x0000 (size: 0x30)
    FMovieSceneConstraintChannel ActiveChannel;                                       // 0x0030 (size: 0x100)
    class UTickableConstraint* ConstraintCopyToSpawn;                                 // 0x0130 (size: 0x8)

}; // Size: 0x138

struct FConstraintTickFunction : public FTickFunction
{
}; // Size: 0x40

struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{
}; // Size: 0x100

class AConstraintsActor : public AActor
{
    class UConstraintsManager* ConstraintsManager;                                    // 0x0290 (size: 0x8)

}; // Size: 0x298

class UConstraintsManager : public UObject
{
    FConstraintsManagerOnConstraintAdded_BP OnConstraintAdded_BP;                     // 0x0028 (size: 0x1)
    void OnConstraintAdded(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint);
    FConstraintsManagerOnConstraintRemoved_BP OnConstraintRemoved_BP;                 // 0x0029 (size: 0x1)
    void OnConstraintRemoved(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    TArray<class UTickableConstraint*> Constraints;                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveConstraint(class UWorld* InWorld, int32 InIndex);
    class UConstraintsManager* GetManager(class UWorld* InWorld);
    class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const FName& InSocketName);
    class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, const ETransformConstraintType InType);
    bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, const bool bMaintainOffset);
}; // Size: 0x28

class UTickableConstraint : public UObject
{
    FConstraintTickFunction ConstraintTick;                                           // 0x0028 (size: 0x40)
    bool Active;                                                                      // 0x0068 (size: 0x1)

}; // Size: 0x70

class UTickableLookAtConstraint : public UTickableTransformConstraint
{
    FVector Axis;                                                                     // 0x0090 (size: 0x18)

}; // Size: 0xA8

class UTickableParentConstraint : public UTickableTransformConstraint
{
    FTransform OffsetTransform;                                                       // 0x00A0 (size: 0x60)
    bool bScaling;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

class UTickableRotationConstraint : public UTickableTransformConstraint
{
    FQuat OffsetRotation;                                                             // 0x00A0 (size: 0x20)

}; // Size: 0xC0

class UTickableScaleConstraint : public UTickableTransformConstraint
{
    FVector OffsetScale;                                                              // 0x0098 (size: 0x18)

}; // Size: 0xB0

class UTickableTransformConstraint : public UTickableConstraint
{
    class UTransformableHandle* ParentTRSHandle;                                      // 0x0070 (size: 0x8)
    class UTransformableHandle* ChildTRSHandle;                                       // 0x0078 (size: 0x8)
    bool bMaintainOffset;                                                             // 0x0080 (size: 0x1)
    float Weight;                                                                     // 0x0084 (size: 0x4)
    bool bDynamicOffset;                                                              // 0x0088 (size: 0x1)
    ETransformConstraintType Type;                                                    // 0x0089 (size: 0x1)

}; // Size: 0x90

class UTickableTranslationConstraint : public UTickableTransformConstraint
{
    FVector OffsetTranslation;                                                        // 0x0098 (size: 0x18)

}; // Size: 0xB0

class UTransformableComponentHandle : public UTransformableHandle
{
    TWeakObjectPtr<class USceneComponent> Component;                                  // 0x0058 (size: 0x8)
    FName SocketName;                                                                 // 0x0060 (size: 0x8)

}; // Size: 0x68

class UTransformableHandle : public UObject
{
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x0028 (size: 0x18)

}; // Size: 0x58

#endif
