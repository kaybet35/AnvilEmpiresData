#ifndef UE4SS_SDK_TypedElementFramework_HPP
#define UE4SS_SDK_TypedElementFramework_HPP

struct FScriptTypedElementHandle
{
}; // Size: 0x8

struct FScriptTypedElementListProxy
{
}; // Size: 0x10

class ITestTypedElementInterfaceA : public IInterface
{

    bool SetDisplayName(const FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);
    FText GetDisplayName(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITestTypedElementInterfaceB : public IInterface
{

    bool MarkAsTested(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITestTypedElementInterfaceC : public IInterface
{

    bool GetIsTested(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITypedElementCounterInterface : public IInterface
{
}; // Size: 0x28

class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
}; // Size: 0x30

class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
}; // Size: 0x30

class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
}; // Size: 0x38

class UTypedElementHandleLibrary : public UObject
{

    void Release(FScriptTypedElementHandle& ElementHandle);
    bool NotEqual(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    bool IsSet(const FScriptTypedElementHandle& ElementHandle);
    bool Equal(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
}; // Size: 0x28

class UTypedElementListLibrary : public UObject
{

    void Shrink(FScriptTypedElementListProxy ElementList);
    void Reset(FScriptTypedElementListProxy ElementList);
    void Reserve(FScriptTypedElementListProxy ElementList, const int32 Size);
    bool Remove(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    int32 Num(const FScriptTypedElementListProxy ElementList);
    bool IsValidIndex(const FScriptTypedElementListProxy ElementList, const int32 Index);
    bool HasElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    bool HasElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    class UObject* GetElementInterface(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle, const TSubclassOf<class UInterface> BaseInterfaceType);
    TArray<FScriptTypedElementHandle> GetElementHandles(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    FScriptTypedElementHandle GetElementHandleAt(const FScriptTypedElementListProxy ElementList, const int32 Index);
    void Empty(FScriptTypedElementListProxy ElementList, const int32 Slack);
    FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);
    int32 CountElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    int32 CountElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    bool Contains(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    FScriptTypedElementListProxy Clone(const FScriptTypedElementListProxy ElementList);
    void AppendList(FScriptTypedElementListProxy ElementList, const FScriptTypedElementListProxy OtherElementList);
    void Append(FScriptTypedElementListProxy ElementList, const TArray<FScriptTypedElementHandle>& ElementHandles);
    bool Add(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
}; // Size: 0x28

class UTypedElementRegistry : public UObject
{

    class UTypedElementRegistry* GetInstance();
    class UObject* GetElementInterface(const FScriptTypedElementHandle& InElementHandle, const TSubclassOf<class UInterface> InBaseInterfaceType);
}; // Size: 0x948

#endif
