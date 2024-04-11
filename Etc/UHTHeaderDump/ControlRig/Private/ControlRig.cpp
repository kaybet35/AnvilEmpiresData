#include "ControlRig.h"
#include "Templates/SubclassOf.h"

UControlRig::UControlRig() {
    this->ExecutionType = ERigExecutionType::Runtime;
    this->VM = NULL;
    this->DynamicHierarchy = NULL;
    this->DataSourceRegistry = NULL;
    this->EventQueue.AddDefaulted(1);
    this->InteractionRig = NULL;
    this->InteractionRigClass = NULL;
}

bool UControlRig::SupportsEvent(const FName& InEventName) const {
    return false;
}

bool UControlRig::SetVariableFromString(const FName& InVariableName, const FString& InValue) {
    return false;
}

void UControlRig::SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass) {
}

void UControlRig::SetInteractionRig(UControlRig* InInteractionRig) {
}

void UControlRig::SetFramesPerSecond(float InFramesPerSecond) {
}

void UControlRig::SetDeltaTime(float InDeltaTime) {
}

void UControlRig::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero) {
}

void UControlRig::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime) {
}

void UControlRig::SelectControl(const FName& InControlName, bool bSelect) {
}

void UControlRig::RequestInit() {
}

void UControlRig::RequestConstruction() {
}

bool UControlRig::IsControlSelected(const FName& InControlName) const {
    return false;
}

URigVM* UControlRig::GetVM() {
    return NULL;
}

FName UControlRig::GetVariableType(const FName& InVariableName) const {
    return NAME_None;
}

FString UControlRig::GetVariableAsString(const FName& InVariableName) const {
    return TEXT("");
}

TArray<FName> UControlRig::GetSupportedEvents() const {
    return TArray<FName>();
}

TArray<FName> UControlRig::GetScriptAccessibleVariables() const {
    return TArray<FName>();
}

TSubclassOf<UControlRig> UControlRig::GetInteractionRigClass() const {
    return NULL;
}

UControlRig* UControlRig::GetInteractionRig() const {
    return NULL;
}

AActor* UControlRig::GetHostingActor() const {
    return NULL;
}

URigHierarchy* UControlRig::GetHierarchy() {
    return NULL;
}

TArray<FName> UControlRig::GetEvents() const {
    return TArray<FName>();
}

float UControlRig::GetCurrentFramesPerSecond() const {
    return 0.0f;
}

float UControlRig::GetAbsoluteTime() const {
    return 0.0f;
}

TArray<UControlRig*> UControlRig::FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass) {
    return TArray<UControlRig*>();
}

bool UControlRig::ExecuteEvent(const FName& InEventName) {
    return false;
}

bool UControlRig::Execute(const EControlRigState State, const FName& InEventName) {
    return false;
}

TArray<FName> UControlRig::CurrentControlSelection() const {
    return TArray<FName>();
}

UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(UObject* Outer, const FName& ControlName) const {
    return NULL;
}

bool UControlRig::ContainsEvent(const FName& InEventName) const {
    return false;
}

bool UControlRig::ClearControlSelection() {
    return false;
}

bool UControlRig::CanExecute() const {
    return false;
}


