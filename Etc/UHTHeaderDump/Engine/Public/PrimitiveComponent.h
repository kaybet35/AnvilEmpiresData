#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERadialImpulseFalloff -FallbackName=ERadialImpulseFalloff
#include "BodyInstance.h"
#include "BodyInstanceAsyncPhysicsTickHandle.h"
#include "ComponentBeginCursorOverSignatureDelegate.h"
#include "ComponentBeginOverlapSignatureDelegate.h"
#include "ComponentBeginTouchOverSignatureDelegate.h"
#include "ComponentEndCursorOverSignatureDelegate.h"
#include "ComponentEndOverlapSignatureDelegate.h"
#include "ComponentEndTouchOverSignatureDelegate.h"
#include "ComponentHitSignatureDelegate.h"
#include "ComponentOnClickedSignatureDelegate.h"
#include "ComponentOnInputTouchBeginSignatureDelegate.h"
#include "ComponentOnInputTouchEndSignatureDelegate.h"
#include "ComponentOnReleasedSignatureDelegate.h"
#include "ComponentPhysicsStateChangedDelegate.h"
#include "ComponentSleepSignatureDelegate.h"
#include "ComponentWakeSignatureDelegate.h"
#include "CustomPrimitiveData.h"
#include "ECanBeCharacterBase.h"
#include "ECollisionChannel.h"
#include "ECollisionEnabled.h"
#include "ECollisionResponse.h"
#include "EDOFMode.h"
#include "EHasCustomNavigableGeometry.h"
#include "EIndirectLightingCacheQuality.h"
#include "ELightmapType.h"
#include "ERayTracingGroupCullingPriority.h"
#include "ERendererStencilMask.h"
#include "ERuntimeVirtualTextureMainPassType.h"
#include "ESceneDepthPriorityGroup.h"
#include "HitResult.h"
#include "Interface_AsyncCompilation.h"
#include "LightingChannels.h"
#include "NavRelevantInterface.h"
#include "SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "WalkableSlopeOverride.h"
#include "PrimitiveComponent.generated.h"

class AActor;
class APawn;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPhysicalMaterial;
class UPrimitiveComponent;
class URuntimeVirtualTexture;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPrimitiveComponent : public USceneComponent, public INavRelevantInterface, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDrawDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LDMaxDrawDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedMaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightmapType LightmapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsValidTextureStreamingBuiltData: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeverDistanceCull: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysCreatePhysicsState: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEvents: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMultiBodyOverlap: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraceComplexOnMove: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnMaterialOnMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseViewOwnerDepthPriorityGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowCullDistanceVolume: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisibleInReflectionCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisibleInRealTimeSkyCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisibleInRayTracing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderInMainPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderInDepthPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOwnerNoSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyOwnerSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTreatAsBackgroundForOcclusion: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAsOccluder: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelectable: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceMipStreaming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasPerInstanceHitProxies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CastShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEmissiveLightSource: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectIndirectLightingWhileHidden: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastVolumetricTranslucentShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastContactShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelfShadowOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastFarShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastInsetShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastCinematicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastHiddenShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLightAsIfStatic: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLightAttachmentsAsGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeFromLightAttachmentGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReceiveMobileCSMShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSingleSampleShadowFromStationaryLights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreRadialImpulse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreRadialForce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyImpulseOnDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicatePhysicsToAutonomousProxy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFillCollisionUnderneathForNavmesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AlwaysLoadOnClient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AlwaysLoadOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEditorCompositing: 1;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingMovedByEditor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisibleInSceneCaptureOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHiddenInSceneCapture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRayTracingFarField: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasNoStreamableTextures: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHasCustomNavigableGeometry::Type> bHasCustomNavigableGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibilityId;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomDepthStencilValue;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomPrimitiveData CustomPrimitiveData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomPrimitiveData CustomPrimitiveDataInternal;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucencySortPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslucencySortDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 VirtualTextureLodBias;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 VirtualTextureCullMips;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 VirtualTextureMinCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsScale;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MoveIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> MoveIgnoreComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentHitSignature OnComponentHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentBeginOverlapSignature OnComponentBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentEndOverlapSignature OnComponentEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentWakeSignature OnComponentWake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentSleepSignature OnComponentSleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentPhysicsStateChanged OnComponentPhysicsStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentBeginCursorOverSignature OnBeginCursorOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentEndCursorOverSignature OnEndCursorOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentOnClickedSignature OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentOnReleasedSignature OnReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentOnInputTouchBeginSignature OnInputTouchBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentOnInputTouchEndSignature OnInputTouchEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentBeginTouchOverSignature OnInputTouchEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentEndTouchOverSignature OnInputTouchLeave;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERayTracingGroupCullingPriority RayTracingGroupCullingPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERendererStencilMask CustomDepthStencilWriteMask;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LODParentPrimitive;
    
public:
    UPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable)
    void WakeRigidBody(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void WakeAllRigidBodies();
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleInSceneCaptureOnly(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleInRayTracing(bool bNewVisibleInRayTracing);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterForDefaultCustomPrimitiveData(FName ParameterName, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterForCustomPrimitiveData(FName ParameterName, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCCD(bool InUseCCD, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysics(bool bSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterForDefaultCustomPrimitiveData(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterForCustomPrimitiveData(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInMainPass(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInDepthPass(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCustomDepth(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivesDecals(bool bNewReceivesDecals);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetMassScale(FName BoneName, float InMassScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDamping(float InDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInSceneCapture(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool bGravityEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveLightSource(bool NewEmissiveLightSource);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencilValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistance(float NewCullDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintMode(TEnumAsByte<EDOFMode::Type> ConstraintMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled::Type> NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadow(bool NewCastShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetCastInsetShadow(bool bInCastInsetShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetCastHiddenShadow(bool NewCastHiddenShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetCastContactShadow(bool bInCastContactShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsScale(float NewBoundsScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDamping(float InDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetAllUseCCD(bool InUseCCD);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMassScale(float InMassScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void PutRigidBodyToSleep(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsQueryCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsPhysicsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool K2_BoxOverlapComponent(FVector InBoxCentre, const FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingComponent(const UPrimitiveComponent* OtherComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGravityEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyRigidBodyAwake();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateLumenSurfaceCache();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWalkableSlopeOverride GetWalkableSlopeOverride() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPhysicsLinearVelocity(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPhysicsAngularVelocityInRadians(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPhysicsAngularVelocityInDegrees(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetMaterial(int32 ElementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMassScale(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLinearDamping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInertiaTensor(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenerateOverlapEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomPrimitiveDataIndexForVectorParameter(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomPrimitiveDataIndexForScalarParameter(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCollisionProfileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetCollisionObjectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionEnabled::Type> GetCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenterOfMass(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBodyInstanceAsyncPhysicsTickHandle GetBodyInstanceAsyncPhysicsTickHandle(FName BoneName, bool bGetWelded, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAngularDamping() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, UMaterialInterface* Parent);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> CopyArrayOfMoveIgnoreActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterStepUp(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void AddVelocityChangeImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddForceAtLocation(FVector Force, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
    

    // Fix for true pure virtual functions not being implemented
};

