#include "AnimInstance.h"
#include "Templates/SubclassOf.h"

UAnimInstance::UAnimInstance() {
    this->CurrentSkeleton = NULL;
    this->RootMotionMode = ERootMotionMode::RootMotionFromMontagesOnly;
    this->bUseMultiThreadedAnimationUpdate = true;
    this->bUsingCopyPoseFromMesh = false;
    this->bReceiveNotifiesFromLinkedInstances = false;
    this->bPropagateNotifiesToLinkedInstances = false;
    this->bUseMainInstanceMontageEvaluationData = false;
    this->bQueueMontageEvents = false;
}

bool UAnimInstance::WasAnimNotifyTriggeredInStateMachine(int32 MachineIndex, TSubclassOf<UAnimNotify> AnimNotifyType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyTriggeredInSourceState(int32 MachineIndex, int32 StateIndex, TSubclassOf<UAnimNotify> AnimNotifyType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyTriggeredInAnyState(TSubclassOf<UAnimNotify> AnimNotifyType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyStateActiveInStateMachine(int32 MachineIndex, TSubclassOf<UAnimNotifyState> AnimNotifyStateType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyStateActiveInSourceState(int32 MachineIndex, int32 StateIndex, TSubclassOf<UAnimNotifyState> AnimNotifyStateType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyStateActiveInAnyState(TSubclassOf<UAnimNotifyState> AnimNotifyStateType) {
    return false;
}

bool UAnimInstance::WasAnimNotifyNameTriggeredInStateMachine(int32 MachineIndex, FName NotifyName) {
    return false;
}

bool UAnimInstance::WasAnimNotifyNameTriggeredInSourceState(int32 MachineIndex, int32 StateIndex, FName NotifyName) {
    return false;
}

bool UAnimInstance::WasAnimNotifyNameTriggeredInAnyState(FName NotifyName) {
    return false;
}

void UAnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
}

void UAnimInstance::UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass) {
}

APawn* UAnimInstance::TryGetPawnOwner() const {
    return NULL;
}

void UAnimInstance::StopSlotAnimation(float InBlendOutTime, FName SlotNodeName) {
}

void UAnimInstance::SnapshotPose(FPoseSnapshot& Snapshot) {
}

void UAnimInstance::SetUseMainInstanceMontageEvaluationData(bool bSet) {
}

void UAnimInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value) {
}

void UAnimInstance::SetReceiveNotifiesFromLinkedInstances(bool bSet) {
}

void UAnimInstance::SetPropagateNotifiesToLinkedInstances(bool bSet) {
}

void UAnimInstance::SetMorphTarget(FName MorphTargetName, float Value) {
}

void UAnimInstance::SavePoseSnapshot(FName SnapshotName) {
}

void UAnimInstance::ResetDynamics(ETeleportType InTeleportType) {
}

bool UAnimInstance::RequestTransitionEvent(const FName EventName, const double RequestTimeout, const ETransitionRequestQueueMode QueueMode, const ETransitionRequestOverwriteMode OverwriteMode) {
    return false;
}

void UAnimInstance::RequestSlotGroupInertialization(FName InSlotGroupName, float Duration, const UBlendProfile* BlendProfile) {
}

void UAnimInstance::RemovePoseSnapshot(FName SnapshotName) {
}

bool UAnimInstance::QueryTransitionEvent(int32 MachineIndex, int32 TransitionIndex, FName EventName) {
    return false;
}

bool UAnimInstance::QueryAndMarkTransitionEvent(int32 MachineIndex, int32 TransitionIndex, FName EventName) {
    return false;
}

UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage_WithBlendSettings(UAnimSequenceBase* Asset, FName SlotNodeName, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage_WithBlendArgs(UAnimSequenceBase* Asset, FName SlotNodeName, const FAlphaBlendArgs& BlendIn, const FAlphaBlendArgs& BlendOut, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

void UAnimInstance::MontageSync_StopFollowing(const UAnimMontage* MontageFollower) {
}

void UAnimInstance::MontageSync_Follow(const UAnimMontage* MontageFollower, const UAnimInstance* OtherAnimInstance, const UAnimMontage* MontageLeader) {
}

void UAnimInstance::Montage_StopWithBlendSettings(const FMontageBlendSettings& BlendOutSettings, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_StopWithBlendOut(const FAlphaBlendArgs& BlendOut, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_StopGroupByName(float InBlendOutTime, FName GroupName) {
}

void UAnimInstance::Montage_Stop(float InBlendOutTime, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_SetPosition(const UAnimMontage* Montage, float NewPosition) {
}

void UAnimInstance::Montage_SetPlayRate(const UAnimMontage* Montage, float NewPlayRate) {
}

void UAnimInstance::Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_Resume(const UAnimMontage* Montage) {
}

float UAnimInstance::Montage_PlayWithBlendSettings(UAnimMontage* MontageToPlay, const FMontageBlendSettings& BlendInSettings, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

float UAnimInstance::Montage_PlayWithBlendIn(UAnimMontage* MontageToPlay, const FAlphaBlendArgs& BlendIn, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

float UAnimInstance::Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

void UAnimInstance::Montage_Pause(const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage) {
}

void UAnimInstance::Montage_JumpToSection(FName SectionName, const UAnimMontage* Montage) {
}

bool UAnimInstance::Montage_IsPlaying(const UAnimMontage* Montage) const {
    return false;
}

bool UAnimInstance::Montage_IsActive(const UAnimMontage* Montage) const {
    return false;
}

float UAnimInstance::Montage_GetPosition(const UAnimMontage* Montage) const {
    return 0.0f;
}

float UAnimInstance::Montage_GetPlayRate(const UAnimMontage* Montage) const {
    return 0.0f;
}

bool UAnimInstance::Montage_GetIsStopped(const UAnimMontage* Montage) const {
    return false;
}

FName UAnimInstance::Montage_GetCurrentSection(const UAnimMontage* Montage) const {
    return NAME_None;
}

float UAnimInstance::Montage_GetBlendTime(const UAnimMontage* Montage) const {
    return 0.0f;
}

void UAnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
}

void UAnimInstance::LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass) {
}

void UAnimInstance::LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass) {
}

bool UAnimInstance::IsUsingMainInstanceMontageEvaluationData() const {
    return false;
}

bool UAnimInstance::IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) const {
    return false;
}

bool UAnimInstance::IsPlayingSlotAnimation(const UAnimSequenceBase* Asset, FName SlotNodeName) const {
    return false;
}

bool UAnimInstance::IsAnyMontagePlaying() const {
    return false;
}

bool UAnimInstance::HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) const {
    return false;
}

bool UAnimInstance::GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) const {
    return false;
}

FMarkerSyncAnimPosition UAnimInstance::GetSyncGroupPosition(FName InSyncGroupName) const {
    return FMarkerSyncAnimPosition{};
}

float UAnimInstance::GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

bool UAnimInstance::GetReceiveNotifiesFromLinkedInstances() const {
    return false;
}

bool UAnimInstance::GetPropagateNotifiesToLinkedInstances() const {
    return false;
}

USkeletalMeshComponent* UAnimInstance::GetOwningComponent() const {
    return NULL;
}

AActor* UAnimInstance::GetOwningActor() const {
    return NULL;
}

void UAnimInstance::GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances) const {
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<UAnimInstance> InClass) const {
    return NULL;
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroup(FName InGroup) const {
    return NULL;
}

UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const {
    return NULL;
}

void UAnimInstance::GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const {
}

UAnimInstance* UAnimInstance::GetLinkedAnimGraphInstanceByTag(FName InTag) const {
    return NULL;
}

float UAnimInstance::GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceMachineWeight(int32 MachineIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceCurrentStateElapsedTime(int32 MachineIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerTime(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetInstanceAssetPlayerLength(int32 AssetPlayerIndex) {
    return 0.0f;
}

float UAnimInstance::GetDeltaSeconds() const {
    return 0.0f;
}

bool UAnimInstance::GetCurveValueWithDefault(FName CurveName, float DefaultValue, float& OutValue) {
    return false;
}

float UAnimInstance::GetCurveValue(FName CurveName) const {
    return 0.0f;
}

FName UAnimInstance::GetCurrentStateName(int32 MachineIndex) {
    return NAME_None;
}

UAnimMontage* UAnimInstance::GetCurrentActiveMontage() const {
    return NULL;
}

void UAnimInstance::GetAllCurveNames(TArray<FName>& OutNames) const {
}

void UAnimInstance::GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) const {
}

void UAnimInstance::ClearTransitionEvents(const FName EventName) {
}

void UAnimInstance::ClearMorphTargets() {
}

void UAnimInstance::ClearAllTransitionEvents() {
}

float UAnimInstance::CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation) const {
    return 0.0f;
}








