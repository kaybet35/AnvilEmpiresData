#ifndef UE4SS_SDK_Anvil_HPP
#define UE4SS_SDK_Anvil_HPP

#include "Anvil_enums.hpp"

struct FAnvilAssetManager
{
    class UObjectLibrary* EntityTemplateObjectLibrary;                                // 0x0000 (size: 0x8)
    class UObjectLibrary* ItemTemplateObjectLibrary;                                  // 0x0008 (size: 0x8)
    class UObjectLibrary* VisItemObjectLibrary;                                       // 0x0010 (size: 0x8)
    TMap<class EAnvilBuildLocationType, class FBuildSiteList> BuildSitesPerLocationMap; // 0x0158 (size: 0x50)

}; // Size: 0x1A8

struct FAnvilDataTableManager
{
}; // Size: 0x1

struct FAnvilMovieCharacterState
{
    class AAnvilMovieCharacter* MovieCharacter;                                       // 0x0000 (size: 0x8)
    class AVisVehicle* MovieVehicle;                                                  // 0x0008 (size: 0x8)
    class AActor* MovingActor;                                                        // 0x0010 (size: 0x8)
    float MovementDelay;                                                              // 0x0018 (size: 0x4)
    float AnimationDelay;                                                             // 0x001C (size: 0x4)
    FVector Direction;                                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FAnvilMovieItemAssignment
{
    FString PrimaryArmedItemCodeName;                                                 // 0x0000 (size: 0x10)
    FString SecondaryArmedItemCodeName;                                               // 0x0010 (size: 0x10)
    FString PrimaryUnarmedItemCodeName;                                               // 0x0020 (size: 0x10)
    FString SecondaryUnarmedItemCodeName;                                             // 0x0030 (size: 0x10)
    float ChanceToAssign;                                                             // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FAnvilOptionsManager
{
    TMap<class FString, class FAudioVolumeClass> AudioVolumeMap;                      // 0x0000 (size: 0x50)
    class UAnvilGameInstance* GameInstance;                                           // 0x0050 (size: 0x8)
    class UAnvilOptionsSave* OptionsSave;                                             // 0x0058 (size: 0x8)

}; // Size: 0x1A0

struct FAnvilPropertyUtil
{
}; // Size: 0x1

struct FArmourTypeMeshes
{
    class USkeletalMesh* HeadArmourMeshes;                                            // 0x0000 (size: 0x18)
    class USkeletalMesh* BodyArmourMeshes;                                            // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FAudioVolumeClass
{
    class USoundMix* Mixer;                                                           // 0x0000 (size: 0x8)
    class USoundClass* SoundClass;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAutoMoveState
{
}; // Size: 0xC

struct FBuildSiteList
{
    TArray<class AVisBuildSite*> List;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCameraRotateState
{
}; // Size: 0x18

struct FClientConfig
{
    FString Ip;                                                                       // 0x0000 (size: 0x10)
    FString AnvilServiceHttpUrl;                                                      // 0x0010 (size: 0x10)
    FString Announcement;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FClientConfigManager
{
}; // Size: 0x40

struct FClientConnectionRequest
{
    uint64 OnlineId;                                                                  // 0x0000 (size: 0x8)
    uint64 ProtocolId;                                                                // 0x0008 (size: 0x8)
    FString TargetServerName;                                                         // 0x0010 (size: 0x10)
    uint8 SelectedFactionId;                                                          // 0x0020 (size: 0x1)
    uint8 QueueTypeToJoin;                                                            // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FConnectToServerResponse
{
    EClientConnectToServerResponseType ResponseType;                                  // 0x0000 (size: 0x1)
    uint8 SelectedFactionId;                                                          // 0x0001 (size: 0x1)
    FString ConnectTokenBase64;                                                       // 0x0008 (size: 0x10)
    FString ServerNameToJoin;                                                         // 0x0018 (size: 0x10)
    FString ServerAddressToJoin;                                                      // 0x0028 (size: 0x10)
    int32 QueuePosition;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FContextfulPlacementStatus
{
}; // Size: 0x8

struct FDayNightKeyFrame
{
    FString Label;                                                                    // 0x0000 (size: 0x10)
    float NormalizedPosition;                                                         // 0x0010 (size: 0x4)
    float AtmosphericLightIntensity;                                                  // 0x0014 (size: 0x4)
    FLinearColor AtmosphericLightColor;                                               // 0x0018 (size: 0x10)
    float SunLightIntensity;                                                          // 0x0028 (size: 0x4)
    FLinearColor SunLightColor;                                                       // 0x002C (size: 0x10)
    float SunLightShadowBias;                                                         // 0x003C (size: 0x4)
    float SunLightShadowSlopeBias;                                                    // 0x0040 (size: 0x4)
    float MoonLightIntensity;                                                         // 0x0044 (size: 0x4)
    FLinearColor MoonLightColor;                                                      // 0x0048 (size: 0x10)
    FLinearColor AtmosphereRayleighScatteringColor;                                   // 0x0058 (size: 0x10)
    float WhiteBalanceTemp;                                                           // 0x0068 (size: 0x4)
    float WhiteBalanceTint;                                                           // 0x006C (size: 0x4)

}; // Size: 0x70

struct FDecayData : public FTableRowBase
{
    bool bEnabled;                                                                    // 0x0008 (size: 0x1)
    float StartDelayHours;                                                            // 0x000C (size: 0x4)
    float DecayTimeHours;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FDeleteProfileResponse
{
    bool bDeletedProfile;                                                             // 0x0000 (size: 0x1)
    uint8 LockedFactionId;                                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FFactionCapacities
{
    TArray<bool> CapacityArray;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFactionLockResponse
{
    uint8 LockedFactionId;                                                            // 0x0000 (size: 0x1)
    bool bCanDeleteProfile;                                                           // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGraphData
{
}; // Size: 0x804

struct FHealthData : public FTableRowBase
{
    float MaxHealth;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FItemData : public FTableRowBase
{
    uint8 Damage;                                                                     // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMapIconInstanceProperty
{
    FText Label;                                                                      // 0x0000 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0018 (size: 0x8)
    TArray<class UTexture2D*> AltIcons;                                               // 0x0020 (size: 0x10)
    TMap<class EMapMode, class UTexture2D*> MapModeIconOverrides;                     // 0x0030 (size: 0x50)
    EMapIconType MapActorType;                                                        // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FMapIconTypeProperty
{
    bool bRotationFixed;                                                              // 0x0000 (size: 0x1)
    bool bPositionFixed;                                                              // 0x0001 (size: 0x1)
    float BaseSize;                                                                   // 0x0004 (size: 0x4)
    float BaseSizeZoomFactor;                                                         // 0x0008 (size: 0x4)
    float FontSize;                                                                   // 0x000C (size: 0x4)
    float FontSizeZoomFactor;                                                         // 0x0010 (size: 0x4)
    int32 ZOrder;                                                                     // 0x0014 (size: 0x4)
    float MinDisplayScale;                                                            // 0x0018 (size: 0x4)
    float MaxDisplayScale;                                                            // 0x001C (size: 0x4)
    float UpdateRange;                                                                // 0x0020 (size: 0x4)
    TSubclassOf<class UMapIcon> IconClass;                                            // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FQueueStatusResponse
{
    QueueStatusType QueueStatus;                                                      // 0x0000 (size: 0x1)
    FString QueuedServerName;                                                         // 0x0008 (size: 0x10)
    int32 QueuePosition;                                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FServerListEntry
{
    FString ServerName;                                                               // 0x0000 (size: 0x10)
    FString ServerAddress;                                                            // 0x0010 (size: 0x10)
    TArray<bool> FactionCapacityArray;                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FServerListResponse
{
    TArray<FServerListEntry> ServerList;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FServerRegion
{
}; // Size: 0x160

struct FVoiceLoginInfo
{
    FString OnlineId;                                                                 // 0x0000 (size: 0x10)
    FString LoginToken;                                                               // 0x0010 (size: 0x10)
    EVoiceChannelType ChannelType;                                                    // 0x0020 (size: 0x1)
    FString ChannelName;                                                              // 0x0028 (size: 0x10)
    FString LocalChannelJoinToken;                                                    // 0x0038 (size: 0x10)
    FString TextChannelJoinToken;                                                     // 0x0048 (size: 0x10)
    FString BroadcastChannelJoinToken;                                                // 0x0058 (size: 0x10)

}; // Size: 0x68

class AAnvilGameModeBase : public AGameModeBase
{
}; // Size: 0x330

class AAnvilMovieCharacter : public AVisActorBase
{
    class USimPlayerDataComponent* SimPlayerDataComponent;                            // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* ItemMeshComponent;                                  // 0x0298 (size: 0x8)
    class USkeletalMeshComponent* ItemSecondaryMeshComponent;                         // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemMeshComponent;                           // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemSecondaryMeshComponent;                  // 0x02B0 (size: 0x8)
    EAnvilVehicleInputState VehicleInputState;                                        // 0x02B8 (size: 0x1)
    class UCapsuleComponent* Capsule;                                                 // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02C8 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x02D0 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x02D8 (size: 0x8)
    class UNiagaraComponent* TorchVFXComponent;                                       // 0x02E0 (size: 0x8)

}; // Size: 0x300

class AAnvilMovieCharacterDirector : public AActor
{
    int32 NumMovieCharacters;                                                         // 0x0290 (size: 0x4)
    TArray<FAnvilMovieCharacterState> MovieCharacterStates;                           // 0x0298 (size: 0x10)
    TSubclassOf<class AAnvilMovieCharacter> MovieCharacterClass;                      // 0x02A8 (size: 0x8)
    TArray<FAnvilMovieItemAssignment> AnvilMovieItemAssignments;                      // 0x02B0 (size: 0x10)
    EAnvilFactionId FactionId;                                                        // 0x02C0 (size: 0x1)
    EAnvilArmourType HeadArmourType;                                                  // 0x02C1 (size: 0x1)
    EAnvilArmourType BodyArmourType;                                                  // 0x02C2 (size: 0x1)
    float RandomDirectionAngle;                                                       // 0x02C4 (size: 0x4)
    int32 NumRows;                                                                    // 0x02C8 (size: 0x4)
    int32 NumColumns;                                                                 // 0x02CC (size: 0x4)
    float RowSize;                                                                    // 0x02D0 (size: 0x4)
    float ColumnSize;                                                                 // 0x02D4 (size: 0x4)
    float RowBias;                                                                    // 0x02D8 (size: 0x4)
    float ColumnBias;                                                                 // 0x02DC (size: 0x4)
    float MovementSpeed;                                                              // 0x02E0 (size: 0x4)
    float MovementDelay;                                                              // 0x02E4 (size: 0x4)
    float AnimationDelay;                                                             // 0x02E8 (size: 0x4)
    float AnimationVelocityMultiplier;                                                // 0x02EC (size: 0x4)
    int32 RowToRecord;                                                                // 0x02F0 (size: 0x4)
    TSubclassOf<class AVisVehicle> VehicleClass;                                      // 0x02F8 (size: 0x8)
    FVector VehicleToCharacterOffset;                                                 // 0x0300 (size: 0x18)
    class UAnimMontage* CharacterAnimationMontage;                                    // 0x0318 (size: 0x8)
    FName VehicleSeatName;                                                            // 0x0320 (size: 0x8)
    int32 NumRowsGuarding;                                                            // 0x0328 (size: 0x4)
    bool bIsDirectorEnabled;                                                          // 0x032C (size: 0x1)
    float LandscapePopUpDistance;                                                     // 0x0330 (size: 0x4)
    float SpawnDelay;                                                                 // 0x0334 (size: 0x4)

}; // Size: 0x340

class AAnvilMoviePipelineController : public APlayerController
{
}; // Size: 0x850

class AAnvilMoviePipelineGameMode : public AGameModeBase
{
}; // Size: 0x330

class AAnvilPlayerController : public APlayerController
{
    class UAnvilRootWidget* RootWidget;                                               // 0x0850 (size: 0x8)

}; // Size: 0x880

class ADayNightManager : public AActor
{

    int32 GetDayCurrentSeconds();
}; // Size: 0x290

class AEntityActor : public AActor
{
    TSubclassOf<class UEntityTemplate> EntityTemplate;                                // 0x0290 (size: 0x8)
    class UChildActorComponent* VisActorPreview;                                      // 0x0298 (size: 0x8)
    class UEntityActorRootComponent* SceneComponent;                                  // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class AGameplayGameMode : public AAnvilGameModeBase
{
}; // Size: 0x330

class AGameplayPlayerController : public AAnvilPlayerController
{
}; // Size: 0x888

class AMainMenuGameMode : public AAnvilGameModeBase
{
}; // Size: 0x330

class AMainMenuPlayerController : public AAnvilPlayerController
{
}; // Size: 0x880

class AMapBorderActor : public ACameraActor
{
    FVector2D WorldSize;                                                              // 0x09A0 (size: 0x10)
    FVector2D WorldOrigin;                                                            // 0x09B0 (size: 0x10)
    FVector2D CapturePadding;                                                         // 0x09C0 (size: 0x10)
    class UTexture2D* MapImage;                                                       // 0x09D0 (size: 0x8)
    class UTexture2D* MapTreeLayerImage;                                              // 0x09D8 (size: 0x8)
    bool bPreCapture;                                                                 // 0x09E0 (size: 0x1)
    bool bCapture;                                                                    // 0x09E1 (size: 0x1)
    class UStaticMeshComponent* BoxVisualizer;                                        // 0x09E8 (size: 0x8)

}; // Size: 0x9F0

class AMapMarkerActor : public AActor
{
    class UMapMarkerComponent* Marker;                                                // 0x0290 (size: 0x8)

}; // Size: 0x298

class APlayerVisualsInfo : public AInfo
{
    TMap<class EAnvilFactionId, class FArmourTypeMeshes> FactionArmourMeshesMap;      // 0x0290 (size: 0x50)

}; // Size: 0x2E0

class AProxyPawn : public ADefaultPawn
{
    class AVisPlayer* VisPlayer;                                                      // 0x0340 (size: 0x8)
    class AVisController* VisController;                                              // 0x0348 (size: 0x8)
    float MaxCameraDistance;                                                          // 0x0350 (size: 0x4)
    float MinCameraDistance;                                                          // 0x0354 (size: 0x4)

    void SetDrawCollisions(bool bDrawCollisions);
    void SetCameraHeight(float Height);
    void SetCameraFov(float FOV);
    void SetCameraAngle(float Angle);
    void OnRotateCameraStop();
    void OnRotateCameraStart();
    void OnPanCameraStop();
    void OnPanCameraStart();
    void EnterBuildMode(const uint32 BuildSiteCodeName, const uint64 ContextID);
    void DrawSphere(float Radius);
    void ClearFogOfWar();
    void ChangeHeight(float Adjust);
    void AutoMoveOff();
    void AutoMove(FString Arg, bool bIsSprint);
}; // Size: 0x3B0

class AServerPartition : public AActor
{
    class UServerPartitionComponent* ServerPartitionComponent;                        // 0x0290 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AUIGlobals : public AInfo
{
    TSubclassOf<class UUserWidget> TooltipClass;                                      // 0x0290 (size: 0x8)

}; // Size: 0x298

class AVisActor : public AVisActorBase
{
    FText VisDisplayName;                                                             // 0x0290 (size: 0x18)
    FText Description;                                                                // 0x02A8 (size: 0x18)
    FText DescriptionFooter;                                                          // 0x02C0 (size: 0x18)
    FMapIconInstanceProperty MapIconProperty;                                         // 0x02D8 (size: 0x88)
    EHUDWindowType UseWindowType;                                                     // 0x0360 (size: 0x1)
    FText UseDisclaimerText;                                                          // 0x0368 (size: 0x18)
    bool bUseForceCameraZoom;                                                         // 0x0380 (size: 0x1)
    TArray<EActionButtonType> AdditionalActionButtons;                                // 0x0388 (size: 0x10)
    uint8 bNightVisibility;                                                           // 0x0398 (size: 0x1)
    uint8 bUseInteractionOutline;                                                     // 0x0398 (size: 0x1)
    class UTexture2D* InteractionIcon;                                                // 0x03A0 (size: 0x8)
    float AnimSpeed;                                                                  // 0x03A8 (size: 0x4)
    class UEntityTemplate* TemplateCDO;                                               // 0x03B8 (size: 0x8)
    float PositionSmoothSpeed;                                                        // 0x03C0 (size: 0x4)
    float RotationSmoothSpeed;                                                        // 0x03C4 (size: 0x4)
    float ClientMovementSmoothingDistance;                                            // 0x03C8 (size: 0x4)
    bool bHasLandscapeCollisions;                                                     // 0x03CC (size: 0x1)
    bool bUseDepthStencilForInteractionHighlight;                                     // 0x03CD (size: 0x1)

}; // Size: 0x3F0

class AVisAnimal : public AVisActor
{
    class UAnimalAIDataComponent* AnimalAIDataComponent;                              // 0x03F0 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x03F8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0408 (size: 0x8)
    TMap<class EAnvilAnimalState, class UAnimMontage*> CurrentStateMontageMap;        // 0x0410 (size: 0x50)
    class USoundCue* TelegraphSoundQueue;                                             // 0x0460 (size: 0x8)

}; // Size: 0x470

class AVisBeaconTower : public AVisStructure
{
    class UBeaconTowerDataComponent* BeaconTowerDataComponent;                        // 0x0480 (size: 0x8)

}; // Size: 0x488

class AVisBuildSite : public AVisActor
{
    class UVisBuildGhostComponent* VisBuildGhostComponent;                            // 0x03F0 (size: 0x8)
    class UBuildSiteDataComponent* BuildSiteDataComponent;                            // 0x03F8 (size: 0x8)
    class UStructureDataComponent* StructureDataComponent;                            // 0x0400 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0408 (size: 0x8)
    EBuildSiteCategory Category;                                                      // 0x0410 (size: 0x1)
    int32 Order;                                                                      // 0x0414 (size: 0x4)
    bool bDisabled;                                                                   // 0x0418 (size: 0x1)
    class UArrowComponent* ArrowComponent;                                            // 0x0420 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0428 (size: 0x8)
    class UDecalComponent* BuildCollisionDecalComponent;                              // 0x0430 (size: 0x8)
    class UMaterialInterface* BuildSiteMaterial;                                      // 0x0438 (size: 0x8)

}; // Size: 0x460

class AVisCart : public AVisVehicle
{
    class UHungerDataComponent* HungerDataComponent;                                  // 0x0418 (size: 0x8)
    class UStaminaDataComponent* StaminaDataComponent;                                // 0x0420 (size: 0x8)
    FName SeatSocketName;                                                             // 0x0428 (size: 0x8)
    class USkeletalMeshComponent* HorseMesh;                                          // 0x0430 (size: 0x8)
    class USkeletalMeshComponent* SaddleMesh;                                         // 0x0438 (size: 0x8)
    class USkeletalMeshComponent* CartMesh;                                           // 0x0440 (size: 0x8)

}; // Size: 0x448

class AVisController : public AVisActor
{
    class UPlayerControllerDataComponent* PlayerControllerDataComponent;              // 0x03F0 (size: 0x8)
    class UMapMarkerComponent* DeathMarker;                                           // 0x03F8 (size: 0x8)

}; // Size: 0x400

class AVisCookingStructure : public AVisStructure
{
    class UCookingDataComponent* CookingDataComponent;                                // 0x04C8 (size: 0x8)

}; // Size: 0x4D0

class AVisEffect : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x03F0 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x03F8 (size: 0x8)
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0408 (size: 0x8)
    class ULifetimeDataComponent* LifetimeDataComponent;                              // 0x0410 (size: 0x8)
    bool bSeekAudioComponent;                                                         // 0x0418 (size: 0x1)

}; // Size: 0x420

class AVisFarm : public AVisStructure
{
    class UDecalComponent* FarmDecalComponent;                                        // 0x0480 (size: 0x8)
    class UDecalComponent* FertilizeDecalComponent;                                   // 0x0488 (size: 0x8)
    float RoughnessStart;                                                             // 0x0490 (size: 0x4)
    float RoughnessEnd;                                                               // 0x0494 (size: 0x4)
    class UFarmDataComponent* FarmDataComponent;                                      // 0x0498 (size: 0x8)

}; // Size: 0x4A0

class AVisFishingBobber : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* MeshComponent;                                        // 0x0298 (size: 0x8)
    class UCableComponent* LineComponent;                                             // 0x02A0 (size: 0x8)
    class UCurveVector* IdleCurve;                                                    // 0x02A8 (size: 0x8)
    class UCurveVector* HookedCurve;                                                  // 0x02B0 (size: 0x8)
    float CastOffsetZ;                                                                // 0x02B8 (size: 0x4)
    float CastDelay;                                                                  // 0x02BC (size: 0x4)
    float CastSpeed;                                                                  // 0x02C0 (size: 0x4)
    float SlackLineLengthFactor;                                                      // 0x02C4 (size: 0x4)
    float TightLineLengthFactor;                                                      // 0x02C8 (size: 0x4)
    class AVisPlayer* Caster;                                                         // 0x02D0 (size: 0x8)

}; // Size: 0x310

class AVisFishingIndicator : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* MeshComponent;                                        // 0x0298 (size: 0x8)
    FLinearColor InvalidColour;                                                       // 0x02A0 (size: 0x10)
    FLinearColor ValidColour;                                                         // 0x02B0 (size: 0x10)
    FLinearColor ReadyColour;                                                         // 0x02C0 (size: 0x10)
    class UMaterialInstanceDynamic* MeshMaterial;                                     // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class AVisGate : public AVisStructure
{
    class UGateDataComponent* GateDataComponent;                                      // 0x0480 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0488 (size: 0x8)

}; // Size: 0x490

class AVisHeatingStructure : public AVisStructure
{
    class UHeatingDataComponent* HeatingDataComponent;                                // 0x04B0 (size: 0x8)

}; // Size: 0x4B8

class AVisHitConverterStructure : public AVisStructure
{
    class UHitConverterDataComponent* HitConverterDataComponent;                      // 0x0480 (size: 0x8)

}; // Size: 0x488

class AVisHouse : public AVisStructure
{
    class UHousingDataComponent* HousingDataComponent;                                // 0x0480 (size: 0x8)
    class UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;                    // 0x0488 (size: 0x8)

}; // Size: 0x490

class AVisImpactEffect : public AVisActor
{
    TSubclassOf<class AActor> HitEffectActors;                                        // 0x03F0 (size: 0x88)
    class UArrowComponent* ArrowComponent;                                            // 0x0478 (size: 0x8)
    class UImpactSurfaceDataComponent* ImpactSurfaceDataComponent;                    // 0x0480 (size: 0x8)

}; // Size: 0x490

class AVisLivestockStructure : public AVisStructure
{
    TSubclassOf<class UItemTemplate> FoodItem;                                        // 0x0480 (size: 0x8)
    TSubclassOf<class UItemTemplate> ProducedItem;                                    // 0x0488 (size: 0x8)

}; // Size: 0x498

class AVisMapPost : public AVisActor
{
    class UMapPostDataComponent* MapPostDataComponent;                                // 0x03F0 (size: 0x8)

}; // Size: 0x3F8

class AVisMarketShop : public AVisStructure
{
    class UMarketShopDataComponent* MarketShopDataComponent;                          // 0x0480 (size: 0x8)

}; // Size: 0x488

class AVisMine : public AVisStructure
{
}; // Size: 0x480

class AVisMobileWeapon : public AVisVehicle
{
    class UMountedWeaponDataComponent* MountedWeaponDataComponent;                    // 0x0418 (size: 0x8)
    class USkeletalMeshComponent* VehicleMesh;                                        // 0x0420 (size: 0x8)
    class USkeletalMeshComponent* AmmoMesh;                                           // 0x0428 (size: 0x8)

}; // Size: 0x430

class AVisOfflineCharacter : public AVisActor
{
    class UOfflineCharacterDataComponent* OfflineCharacterDataComponent;              // 0x03F0 (size: 0x8)
    class USoundCue* DeathCue;                                                        // 0x03F8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0408 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0410 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x0418 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x0420 (size: 0x8)
    class UTeamDataComponent* TeamDataComponent;                                      // 0x0428 (size: 0x8)
    class UArmorDataComponent* ArmourDataComponent;                                   // 0x0430 (size: 0x8)

}; // Size: 0x438

class AVisPickupItem : public AVisActor
{
    class UPickupDataComponent* PickupDataComponent;                                  // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x03F8 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0400 (size: 0x8)

}; // Size: 0x408

class AVisPlayer : public AVisActor
{
    class UVisSpringArmComponent* SpringArm;                                          // 0x03F0 (size: 0x8)
    class USimPlayerDataComponent* SimPlayerDataComponent;                            // 0x03F8 (size: 0x8)
    class UPlayerInputDataComponent* PlayerInputDataComponent;                        // 0x0400 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x0408 (size: 0x8)
    class UHungerDataComponent* HungerDataComponent;                                  // 0x0410 (size: 0x8)
    class UStaminaDataComponent* StaminaDataComponent;                                // 0x0418 (size: 0x8)
    class USkeletalMeshComponent* ItemMeshComponent;                                  // 0x0420 (size: 0x8)
    class USkeletalMeshComponent* ItemSecondaryMeshComponent;                         // 0x0428 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemMeshComponent;                           // 0x0430 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemSecondaryMeshComponent;                  // 0x0438 (size: 0x8)
    class UPostProcessComponent* PostProcessComponent;                                // 0x0440 (size: 0x8)
    float RotationAmount;                                                             // 0x0460 (size: 0x4)
    float CameraRotationLerpSpeed;                                                    // 0x0464 (size: 0x4)
    float AimMeshLength;                                                              // 0x0468 (size: 0x4)
    float YawSpeed;                                                                   // 0x0470 (size: 0x4)
    class UMapMarkerComponent* MapMarker;                                             // 0x0478 (size: 0x8)
    float MinShroudRadius;                                                            // 0x0480 (size: 0x4)
    float MaxShroudRadius;                                                            // 0x0484 (size: 0x4)
    class USoundCue* DeathCue;                                                        // 0x0488 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0490 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0498 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* AimMeshComponent;                                     // 0x04A8 (size: 0x8)
    class UMaterialInstanceDynamic* AimMeshMaterial;                                  // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* MeleeAimMeshComponent;                                // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* MeleeAimMeshTargetComponent;                          // 0x04C0 (size: 0x8)
    TSubclassOf<class AVisFishingIndicator> FishingAimMeshClass;                      // 0x04C8 (size: 0x8)
    TSubclassOf<class AVisFishingBobber> FishingBobberClass;                          // 0x04D8 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x04E0 (size: 0x8)
    TMap<class EAnvilSimActivityState, class UAnimMontage*> ActivityStateMontageMap;  // 0x04E8 (size: 0x50)
    class UArmorDataComponent* ArmourDataComponent;                                   // 0x0538 (size: 0x8)
    class UBillboardComponent* VoiceIndicator;                                        // 0x0540 (size: 0x8)
    class UNiagaraComponent* TorchVFXComponent;                                       // 0x0548 (size: 0x8)
    class UAudioComponent* TorchAudioComponent;                                       // 0x0550 (size: 0x8)
    class UMaterialParameterCollection* PostProcessMaterialParameterCollection;       // 0x0558 (size: 0x8)
    class UMaterialParameterCollection* PositionPostProcessMaterialParameterCollection; // 0x0560 (size: 0x8)
    class AVisActor* CurrentUsableVisActor;                                           // 0x05D0 (size: 0x8)
    class AVisActor* CurrentMountableVisActor;                                        // 0x05D8 (size: 0x8)

    float GetVelocityHeadingDegrees();
    FString GetPlayerName();
    float GetNightVisibilityRadius(float NightTimeNormalized);
    FLinearColor GetNightShroudLightSourcePositionAndRadius(const int32 Index);
    FVector GetCameraVelocity();
    void BP_UpdateNightShroudMaterials(float NightTimeNormalized);
    void BP_OnHeldItemChanged();
    FVector AnimGetVelocity();
}; // Size: 0x5F0

class AVisRefinery : public AVisStructure
{
    class URefineResourceDataComponent* RefineResourceDataComponent;                  // 0x0480 (size: 0x8)

}; // Size: 0x490

class AVisRelicTechCenter : public AVisStructure
{
    class URelicTechCenterDataComponent* RelicTechCenterDataComponent;                // 0x0480 (size: 0x8)

}; // Size: 0x488

class AVisResource : public AVisActor
{
    class UResourceDataComponent* ResourceDataComponent;                              // 0x03F0 (size: 0x8)
    class UPlantGrowthDataComponent* PlantGrowthComponent;                            // 0x03F8 (size: 0x8)
    TArray<class UStaticMesh*> StageMeshes;                                           // 0x0400 (size: 0x10)
    class UArrowComponent* ArrowComponent;                                            // 0x0410 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0418 (size: 0x8)
    class UCurveVector* ShakeCurve;                                                   // 0x0420 (size: 0x8)

}; // Size: 0x438

class AVisRichSoil : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x03F0 (size: 0x8)
    class UDecalComponent* RichSoilDecal;                                             // 0x03F8 (size: 0x8)
    class URichSoilDataComponent* RichSoilDataComponent;                              // 0x0400 (size: 0x8)

}; // Size: 0x410

class AVisSpawnPoint : public AVisActor
{
    class UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;                    // 0x03F0 (size: 0x8)

}; // Size: 0x3F8

class AVisSpline : public AVisStructure
{
    class UVisSplineComponent* SplineComponent;                                       // 0x0480 (size: 0x8)
    class UVisSplineComponent* SplineScaffoldingComponent;                            // 0x0488 (size: 0x8)

}; // Size: 0x490

class AVisSplineBuildSite : public AVisBuildSite
{
    class UVisSplineComponent* SplineComponent;                                       // 0x0460 (size: 0x8)

}; // Size: 0x468

class AVisStaticTorch : public AVisStructure
{
    class UStaticTorchDataComponent* StaticTorchDataComponent;                        // 0x0480 (size: 0x8)

}; // Size: 0x488

class AVisStructure : public AVisActor
{
    class UVisScaffoldingComponent* ScaffoldingComponent;                             // 0x03F0 (size: 0x8)
    class UTexture2D* StructureIcon;                                                  // 0x03F8 (size: 0x8)
    EBuildSiteCategory BuildSiteCategory;                                             // 0x0400 (size: 0x1)
    int32 BuildSiteOrder;                                                             // 0x0404 (size: 0x4)
    bool bBuildSiteDisabled;                                                          // 0x0408 (size: 0x1)
    class UUpgradeDataComponent* UpgradeDataComponent;                                // 0x0410 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x0418 (size: 0x8)
    class UTeamDataComponent* TeamDataComponent;                                      // 0x0420 (size: 0x8)
    class UStructureDataComponent* StructureDataComponent;                            // 0x0428 (size: 0x8)
    class UScorchDataComponent* ScorchDataComponent;                                  // 0x0430 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0438 (size: 0x8)
    class UDecalComponent* UseVolumeDecalComponent;                                   // 0x0440 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalVolume;                           // 0x0448 (size: 0x8)
    int32 GeneratedScorchEffects;                                                     // 0x0450 (size: 0x4)
    class UMeshVisibilityDataComponent* MeshVisibilityDataComponent;                  // 0x0458 (size: 0x8)
    TArray<class USceneComponent*> ToggleVisibilityComponents;                        // 0x0460 (size: 0x10)
    TArray<class UNiagaraSystem*> ScorchEffectAssets;                                 // 0x0470 (size: 0x10)

}; // Size: 0x480

class AVisTownCenter : public AVisStructure
{
    class UTownHallDataComponent* TownHallDataComponent;                              // 0x0480 (size: 0x8)

    void OnUnderAttackChanged(const bool& OldVal, const bool& NewVal);
}; // Size: 0x490

class AVisTownMarker : public AVisStructure
{
}; // Size: 0x480

class AVisTrap : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x03F0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x03F8 (size: 0x8)
    class UAnimationAsset* TriggeredAnimation;                                        // 0x0400 (size: 0x8)
    class UTrapDataComponent* TrapDataComponent;                                      // 0x0408 (size: 0x8)

}; // Size: 0x410

class AVisVehicle : public AVisActor
{
    class UVehicleMovementDataComponent* VehicleMovementDataComponent;                // 0x03F0 (size: 0x8)
    class UAudioComponent* MoveLoopAudioComponent;                                    // 0x03F8 (size: 0x8)
    class UNiagaraComponent* MoveLoopParticleSystem;                                  // 0x0400 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x0408 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0410 (size: 0x8)

}; // Size: 0x418

class AvisLadder : public AVisStructure
{
}; // Size: 0x480

class UActionButtonWidget : public UUserWidget
{
    EActionButtonType ActionButtonType;                                               // 0x0278 (size: 0x1)
    class UButton* ActionButton;                                                      // 0x0280 (size: 0x8)

    void OnHovered();
    void OnClicked();
    bool IsActionButtonEnabled();
    ESlateVisibility GetActionButtonVisibility();
}; // Size: 0x288

class UActionStrip : public UUserWidget
{
    class UTextBlock* DismantleTimerText;                                             // 0x0278 (size: 0x8)

}; // Size: 0x280

class UAdminPlayerListItemData : public UObject
{
}; // Size: 0x50

class UAdminPlayerListItemWidget : public UUserWidget
{
    class UAnvilButtonWidget* NameBox;                                                // 0x0280 (size: 0x8)
    class UAnvilButtonWidget* TeamBox;                                                // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* SteamIdBox;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* TeleportToButton;                                       // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* BanButton;                                              // 0x02A0 (size: 0x8)

    void OnTeleportToClicked();
    void OnBanClicked();
    void CopySteamId();
}; // Size: 0x2C8

class UAdminScreen : public UAnvilScreen
{
    class UListView* PlayerListView;                                                  // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* SortByNameButton;                                       // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* SortByDistanceButton;                                   // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* ReloadButton;                                           // 0x02A0 (size: 0x8)
    class UEditableTextBox* SearchBox;                                                // 0x02A8 (size: 0x8)
    TArray<class UAdminPlayerListItemData*> PlayerList;                               // 0x02B0 (size: 0x10)

    void ReloadList();
    void OnSortByName();
    void OnSortByDistance();
    void OnSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
}; // Size: 0x2C0

class UAnvilButtonWidget : public UUserWidget
{
    FText LabelText;                                                                  // 0x0280 (size: 0x18)
    int32 LabelFontSize;                                                              // 0x0298 (size: 0x4)
    float ButtonWidth;                                                                // 0x029C (size: 0x4)
    float ButtonHeight;                                                               // 0x02A0 (size: 0x4)
    class UTextBlock* ButtonText;                                                     // 0x02A8 (size: 0x8)
    class UButton* Button;                                                            // 0x02B0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02B8 (size: 0x8)

    void ContextfulOnClicked();
}; // Size: 0x2D0

class UAnvilCharacterSave : public USaveGame
{
    TArray<uint8> FogOfWarData;                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UAnvilClientVoiceClient : public UObject
{

    void SetVoiceChatEnabledStateFromLocalSave();
    void SetVoiceChatEnabled(const bool bEnabled);
    void SetPlayVoiceInBackgroundEnabled(const bool InPlayVoiceInBackground);
    void SetOutputVolume(const float Volume);
    void SetInputVolume(const float Volume);
    void Reconnect();
}; // Size: 0x100

class UAnvilDialogBox : public UUserWidget
{
    class UTextBlock* HeaderText;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* BodyText;                                                       // 0x0280 (size: 0x8)
    class UComboBoxString* ComboBox;                                                  // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* LeftButton;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* RightButton;                                            // 0x0298 (size: 0x8)

    void OnRightButtonClicked();
    void OnLeftButtonClicked();
}; // Size: 0x2C0

class UAnvilDropdownEntryWidget : public UUserWidget
{
    class UComboBoxString* ComboBox;                                                  // 0x0278 (size: 0x8)
    FText LabelText;                                                                  // 0x0280 (size: 0x18)
    int32 LabelFontSize;                                                              // 0x0298 (size: 0x4)
    float DropdownProportion;                                                         // 0x029C (size: 0x4)
    float DropdownWidth;                                                              // 0x02A0 (size: 0x4)
    float DropdownHeight;                                                             // 0x02A4 (size: 0x4)
    TArray<FString> ComboList;                                                        // 0x02A8 (size: 0x10)
    class UTextBlock* LabelTextBox;                                                   // 0x02B8 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02C0 (size: 0x8)
    class UHorizontalBox* ComboHorizontalBox;                                         // 0x02C8 (size: 0x8)
    class UBorder* LabelBorder;                                                       // 0x02D0 (size: 0x8)

    void OnOptionSelected(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x2F8

class UAnvilGameInstance : public UGameInstance
{
    class UMapWidget* MapWidget;                                                      // 0x0230 (size: 0x8)
    class UHUDWidget* HUDWidget;                                                      // 0x0238 (size: 0x8)
    class UAnvilCharacterSave* CharacterSave;                                         // 0x0270 (size: 0x8)
    class UAnvilClientVoiceClient* AnvilClientVoiceClient;                            // 0x0278 (size: 0x8)
    FAnvilAssetManager AssetManager;                                                  // 0x0280 (size: 0x1A8)
    FAnvilOptionsManager OptionsManager;                                              // 0x0428 (size: 0x1A0)
    TSubclassOf<class AUIGlobals> UIGlobalsClass;                                     // 0x05C8 (size: 0x8)
    TArray<class ALandscapeProxy*> DirtyLandscapeProxies;                             // 0x05D0 (size: 0x10)
    TArray<class AVisActor*> VisActorList;                                            // 0x05E0 (size: 0x10)
    FClientConfigManager ClientConfigManager;                                         // 0x05F0 (size: 0x40)

    void GetVisActors(TArray<class AVisActor*>& OutVisActorList);
    void GetVersion(int32& OutMajor, int32& OutMinor, int32& OutPatch, int32& OutCL);
    void GetTimeOfDay(int32& OutHours, int32& OutMinutes, int32& OutSeconds);
    float GetNightTimeNormalized();
    bool GetIsNight();
    void GetDayCurrentSeconds(int32& OutSeconds);
    void DumpProperties(FString OutputFileName, const UClass* Type, const TArray<FString>& PropertyNameFilter);
}; // Size: 0x1648

class UAnvilKeyEntryWidget : public UUserWidget
{
    FText LabelText;                                                                  // 0x0290 (size: 0x18)
    int32 LabelFontSize;                                                              // 0x02A8 (size: 0x4)
    FName ActionLabel;                                                                // 0x02AC (size: 0x8)
    EInputType InputType;                                                             // 0x02B4 (size: 0x1)
    float EntryProportion;                                                            // 0x02B8 (size: 0x4)
    float EntryWidth;                                                                 // 0x02BC (size: 0x4)
    float EntryHeight;                                                                // 0x02C0 (size: 0x4)
    class UTextBlock* LabelTextBox;                                                   // 0x02C8 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02D0 (size: 0x8)
    class UHorizontalBox* EntryHorizontalBox;                                         // 0x02D8 (size: 0x8)
    class UBorder* EntryBorder;                                                       // 0x02E0 (size: 0x8)
    class UInputKeySelector* InputSelector;                                           // 0x02E8 (size: 0x8)

    void OnAxisMappingChanged(FInputChord Input);
    void OnActionMappingChanged(FInputChord Input);
}; // Size: 0x2F0

class UAnvilMovieCharacterNameWidget : public UUserWidget
{
    class UTextBlock* NameText;                                                       // 0x0278 (size: 0x8)
    float VisibilitDelayRandomRange;                                                  // 0x0280 (size: 0x4)
    float VisibilitDelayStartTime;                                                    // 0x0284 (size: 0x4)
    FVector VisibiliyDelayPerDistance;                                                // 0x0288 (size: 0x18)
    FVector VisibilityDelayAnchor;                                                    // 0x02A0 (size: 0x18)

}; // Size: 0x2C0

class UAnvilOptionsSave : public USaveGame
{
    TMap<FString, float> VolumeSettings;                                              // 0x0028 (size: 0x50)
    FString SavedVoiceOutputDeviceName;                                               // 0x0078 (size: 0x10)
    FString SavedVoiceInputDeviceName;                                                // 0x0088 (size: 0x10)
    bool bShowPlayerName;                                                             // 0x0098 (size: 0x1)
    int32 AcceptedDisclaimerVersion;                                                  // 0x009C (size: 0x4)

}; // Size: 0xA0

class UAnvilPanel : public UUserWidget
{
    class UNamedSlot* AnvilPanelSlot0;                                                // 0x0278 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot1;                                                // 0x0280 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot2;                                                // 0x0288 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot3;                                                // 0x0290 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot4;                                                // 0x0298 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot5;                                                // 0x02A0 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot6;                                                // 0x02A8 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot7;                                                // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UAnvilRootWidget : public UUserWidget
{
    TMap<class EAnvilScreenType, class UAnvilScreen*> ScreenWidgets;                  // 0x0278 (size: 0x50)
    class UCanvasPanel* ScreenCanvas;                                                 // 0x02C8 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x02D0 (size: 0x8)
    class UAnvilDialogBox* DialogBox;                                                 // 0x02D8 (size: 0x8)
    class UCanvasPanel* WatermarkCanvas;                                              // 0x02E0 (size: 0x8)
    class UTextBlock* WatermarkVersionText;                                           // 0x02E8 (size: 0x8)
    TArray<class UAnvilScreen*> ScreenStack;                                          // 0x02F0 (size: 0x10)

}; // Size: 0x300

class UAnvilScreen : public UUserWidget
{
    bool bOverrideBackground;                                                         // 0x0279 (size: 0x1)
    class UTexture2D* Background;                                                     // 0x0280 (size: 0x8)

}; // Size: 0x288

class UAnvilSliderWidget : public UUserWidget
{
    FString PropertyLabel;                                                            // 0x0278 (size: 0x10)
    FText SliderLabel;                                                                // 0x0298 (size: 0x18)
    int32 SliderLabelFontSize;                                                        // 0x02B0 (size: 0x4)
    float SliderProportion;                                                           // 0x02B4 (size: 0x4)
    float SliderWidth;                                                                // 0x02B8 (size: 0x4)
    float SliderHeight;                                                               // 0x02BC (size: 0x4)
    class UTextBlock* LabelTextBox;                                                   // 0x02C0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02C8 (size: 0x8)
    class USlider* Slider;                                                            // 0x02D0 (size: 0x8)

    void NativeOnSliderChanged(const float Value);
}; // Size: 0x2D8

class UBeaconTowerMapIcon : public UMapIcon
{
    class UCanvasPanelSlot* IconSlot;                                                 // 0x0388 (size: 0x8)

}; // Size: 0x398

class UBeaconTowerPlayerInfoMapIcon : public UMapIcon
{
    FSlateColor FriendlyColour;                                                       // 0x0388 (size: 0x14)
    FSlateColor EnemyColour;                                                          // 0x039C (size: 0x14)

}; // Size: 0x3B0

class UBuildMenuStructureButton : public UGridItemWidget
{

    void OnBuild(class UGridItemWidget* ItemSlot);
}; // Size: 0x2F0

class UBuildMenuTabButton : public UGridItemWidget
{
}; // Size: 0x2F0

class UBuildMenuWindow : public UHUDWindow
{
    class UPanelWidget* TabButtonPanel;                                               // 0x02B0 (size: 0x8)
    class UGridPanelWidget* StructureButtonGrid;                                      // 0x02B8 (size: 0x8)
    TSubclassOf<class UBuildMenuTabButton> TabButtonClass;                            // 0x02C0 (size: 0x8)
    TMap<class EBuildSiteCategory, class UTexture2D*> TabButtonIcons;                 // 0x02C8 (size: 0x50)
    TArray<EAnvilBuildLocationType> BuildLocations;                                   // 0x0318 (size: 0x10)
    class UBuildMenuTabButton* CurrentTabButton;                                      // 0x0328 (size: 0x8)

}; // Size: 0x338

class UChatEntryWidget : public UUserWidget
{
    TMap<class EChatType, class FText> ModeNameMap;                                   // 0x0280 (size: 0x50)
    TMap<class FString, class EChatType> ModeSwitchKeywordMap;                        // 0x02D0 (size: 0x50)
    class URichTextBlock* ChatTextField;                                              // 0x0320 (size: 0x8)

}; // Size: 0x328

class UChatWidget : public UUserWidget
{
    float ChatWidth;                                                                  // 0x0278 (size: 0x4)
    float ChatHeight;                                                                 // 0x027C (size: 0x4)
    float ChatMinimizedHeight;                                                        // 0x0280 (size: 0x4)
    EChatType CurrentMode;                                                            // 0x0284 (size: 0x1)
    class UButton* MinimizeButton;                                                    // 0x0288 (size: 0x8)
    class UButton* MaximizeButton;                                                    // 0x0290 (size: 0x8)
    class UComboBoxString* ChatEntryDropdown;                                         // 0x0298 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02A0 (size: 0x8)
    class UEditableTextBox* ChatEntryTextField;                                       // 0x02A8 (size: 0x8)
    class UListView* ChatHistoryListView;                                             // 0x02B0 (size: 0x8)
    class UChatEntryWidget* EntryTemplate;                                            // 0x0308 (size: 0x8)
    class UObject* LastItem;                                                          // 0x0310 (size: 0x8)

    void OnModeOptionSelected(FString Item, TEnumAsByte<ESelectInfo::Type> Type);
    void OnMinimized();
    void OnMaximized();
    void OnEntryCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
    void OnEntryChanged(const FText& Text);
}; // Size: 0x318

class UConnectScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* BackButton;                                             // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* RefreshButton;                                          // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* ConnectButton;                                          // 0x0298 (size: 0x8)
    class UThrobber* DownloadingThrobber;                                             // 0x02A0 (size: 0x8)
    class UTextBlock* NameValidationMessageText;                                      // 0x02A8 (size: 0x8)

    void OnRefreshButtonClicked();
    void OnConnectButtonClicked();
    void OnBackButtonClicked();
    bool IsRefreshButtonEnabled();
    bool IsConnectButtonEnabled();
    bool IsBackButtonEnabled();
    ESlateVisibility GetThrobberVisibility();
}; // Size: 0x2B0

class UCookingWindow : public UStructureWindow
{
    class UInventoryWidget* RecipeInputItemGrid;                                      // 0x02D8 (size: 0x8)
    class UInventoryWidget* RecipeOutputItemGrid;                                     // 0x02E0 (size: 0x8)
    class UInventoryWidget* FuelInputItemGrid;                                        // 0x02E8 (size: 0x8)
    class UInventoryWidget* FuelOutputItemGrid;                                       // 0x02F0 (size: 0x8)
    class UTextBlock* CookingDurationText;                                            // 0x02F8 (size: 0x8)
    class UTextBlock* FuelDurationText;                                               // 0x0300 (size: 0x8)

    ESlateVisibility GetFuelDurationTextVisibility();
    FText GetFuelDurationText();
    ESlateVisibility GetCookingDurationTextVisibility();
    FText GetCookingDurationText();
}; // Size: 0x308

class UDeathMarketMapIcon : public UMapIcon
{

    void OnLastDeathLocationChanged(const FVector& OldVal, const FVector& NewVal);
}; // Size: 0x388

class UDisclaimerWidget : public UUserWidget
{
    class UCheckBox* DisclaimerCheckBox1;                                             // 0x0278 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox2;                                             // 0x0280 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox3;                                             // 0x0288 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox4;                                             // 0x0290 (size: 0x8)
    class UEditableTextBox* AcceptTextBox;                                            // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* CancelButton;                                           // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* ConfirmButton;                                          // 0x02A8 (size: 0x8)

    void OnConfirmButtonClicked();
    void OnCancelButtonClicked();
    bool IsConfirmButtonEnabled();
    bool IsAcceptTextBoxEnabled();
}; // Size: 0x2B0

class UEntityActorRootComponent : public USceneComponent
{
}; // Size: 0x2A0

class UFactionSelectScreen : public UAnvilScreen
{
    class UButton* FactionAranicButton;                                               // 0x0288 (size: 0x8)
    class UButton* FactionMirrishButton;                                              // 0x0290 (size: 0x8)
    class UButton* FactionNovanButton;                                                // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* DeleteProfileButton;                                    // 0x02A0 (size: 0x8)
    class UTextBlock* FactionAranicAtCapacityText;                                    // 0x02A8 (size: 0x8)
    class UTextBlock* FactionMirrishAtCapacityText;                                   // 0x02B0 (size: 0x8)
    class UTextBlock* FactionNovanAtCapacityText;                                     // 0x02B8 (size: 0x8)
    class UThrobber* DownloadingThrobber;                                             // 0x02C0 (size: 0x8)

    void OnFactionNovanButtonClicked();
    void OnFactionMirrishButtonClicked();
    void OnFactionAranicButtonClicked();
    void OnDeleteProfileButtonClicked();
    bool IsFactionNovanButtonEnabled();
    bool IsFactionMirrishButtonEnabled();
    bool IsFactionAranicButtonEnabled();
    bool IsDeleteProfileButtonEnabled();
    ESlateVisibility GetThrobberVisibility();
    ESlateVisibility GetDeleteProfileButtonVisibility();
    ESlateVisibility FactionNovanAtCapacityVisibility();
    ESlateVisibility FactionMirrishAtCapacityVisibility();
    ESlateVisibility FactionAranicAtCapacityVisibility();
}; // Size: 0x300

class UFoodCooldownIconWidget : public UUserWidget
{
    class UImage* FoodIconImage;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x288

class UFoodCooldownWidget : public UUserWidget
{
    class UTexture2D* FoodTypeIconBrushList;                                          // 0x0278 (size: 0x40)
    TSubclassOf<class UFoodCooldownIconWidget> FoodCooldownIconWidgetClass;           // 0x02B8 (size: 0x8)
    class UHorizontalBox* FoodIconsHorizontalBox;                                     // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UFooterContainer : public UUserWidget
{
    float FooterWidth;                                                                // 0x0278 (size: 0x4)
    float FooterHeight;                                                               // 0x027C (size: 0x4)
    class USizeBox* FooterSizeBox;                                                    // 0x0280 (size: 0x8)
    class UNamedSlot* FooterSlot0;                                                    // 0x0288 (size: 0x8)

}; // Size: 0x290

class UGameplayOverlay : public UUserWidget
{
    class UChatWidget* ChatWidget;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* NotificationText;                                               // 0x0280 (size: 0x8)
    class UTextBlock* SecondaryNotificationText;                                      // 0x0288 (size: 0x8)
    class UTextBlock* PrimaryPromptText;                                              // 0x0290 (size: 0x8)
    class UTextBlock* SecondaryPromptText;                                            // 0x0298 (size: 0x8)

    ESlateVisibility GetHUDWidgetVisibility();
}; // Size: 0x2C0

class UGameplayScreen : public UAnvilScreen
{
    class UGameplayOverlay* GameplayOverlay;                                          // 0x0288 (size: 0x8)
    class UHUDWidget* HUDWidget;                                                      // 0x0290 (size: 0x8)
    class UMapWidget* MapWidget;                                                      // 0x0298 (size: 0x8)
    class UWidgetSwitcher* ContentSwitcher;                                           // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UGrassRemovalVolumeComponent : public USceneComponent
{
    FVector Extents;                                                                  // 0x02A0 (size: 0x18)
    uint8 bDeferGrassUpdate;                                                          // 0x02B8 (size: 0x1)
    class USplineDataComponent* SplineDataComponent;                                  // 0x02C0 (size: 0x8)

    void TryRemoveGrass();
    bool RemoveGrass();
}; // Size: 0x2E0

class UGridItemWidget : public UUserWidget
{
    float ItemWidth;                                                                  // 0x02B8 (size: 0x4)
    float ItemHeight;                                                                 // 0x02BC (size: 0x4)
    class UButton* Button;                                                            // 0x02C0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02C8 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x02D0 (size: 0x8)
    class UImage* SubItemImage;                                                       // 0x02D8 (size: 0x8)
    class UTexture2D* EmptyImage;                                                     // 0x02E0 (size: 0x8)
    bool bIsActive;                                                                   // 0x02E8 (size: 0x1)

    void OnClicked();
}; // Size: 0x2F0

class UGridPanelWidget : public UUniformGridPanel
{
    FIntPoint PreferredDimension;                                                     // 0x0190 (size: 0x8)
    TSubclassOf<class UGridItemWidget> ItemSlotWidgetType;                            // 0x0198 (size: 0x8)
    int32 PreviewItemCount;                                                           // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

class UHUDNameWidget : public UUserWidget
{
    class AVisActor* TargetVisActor;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* LocalChatText;                                                  // 0x0290 (size: 0x8)
    int32 LocalChatTextLimit;                                                         // 0x0298 (size: 0x4)
    FSlateColor NameTypeColourList;                                                   // 0x029C (size: 0x64)

    ESlateVisibility GetWidgetVisibility();
    ESlateVisibility GetPlayerNameVisibility();
    FText GetPlayerNameText();
    FSlateColor GetPlayerNameColour();
    ESlateVisibility GetLocalChatTextVisibility();
}; // Size: 0x300

class UHUDStatsWidget : public UUserWidget
{
    class UTextBlock* StatsText;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UHUDWidget : public UUserWidget
{
    class UInteractionIconWidget* InteractionIcon;                                    // 0x0278 (size: 0x8)
    class UCanvasPanel* HUDCanvas;                                                    // 0x0280 (size: 0x8)
    class UCanvasPanel* NameCanvas;                                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* StatsCanvas;                                                  // 0x0290 (size: 0x8)
    TMap<class EHUDWindowType, class UHUDWindow*> HUDWindowWidgets;                   // 0x0298 (size: 0x50)
    TSubclassOf<class UHUDNameWidget> HUDNameWidgetClass;                             // 0x02E8 (size: 0x8)
    TSubclassOf<class UHUDStatsWidget> HUDStatsWidgetClass;                           // 0x02F0 (size: 0x8)
    class UHUDWindow* OpenedHUDWindow;                                                // 0x02F8 (size: 0x8)
    class UImage* Compass;                                                            // 0x0300 (size: 0x8)
    class UImage* CompassPlayerArrow;                                                 // 0x0308 (size: 0x8)
    class UInventoryItemWidget* PrimaryHeldItem;                                      // 0x0310 (size: 0x8)
    class UInventoryItemWidget* SecondaryHeldItem;                                    // 0x0318 (size: 0x8)
    class UProgressBar* GuardBar;                                                     // 0x0320 (size: 0x8)
    class UPanelWidget* GuardStatusWidget;                                            // 0x0328 (size: 0x8)
    class UImage* GuardStrengthLeftIcon;                                              // 0x0330 (size: 0x8)
    class UImage* GuardStrengthCenterIcon;                                            // 0x0338 (size: 0x8)
    class UImage* GuardStrengthRightIcon;                                             // 0x0340 (size: 0x8)
    class UImage* EncumbranceIcon;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* EncumbranceText;                                                // 0x0350 (size: 0x8)
    class UTextBlock* PlayerStatusText;                                               // 0x0358 (size: 0x8)
    class UTextBlock* GameplayHintText;                                               // 0x0360 (size: 0x8)
    class UCanvasPanel* GameplayHintCanvas;                                           // 0x0368 (size: 0x8)
    class UCanvasPanel* WinConditionCanvas;                                           // 0x0370 (size: 0x8)
    class UTextBlock* WinConditionText;                                               // 0x0378 (size: 0x8)
    class UImage* WinConditionLogo;                                                   // 0x0380 (size: 0x8)
    class UCanvasPanel* TownStatusAlertCanvas;                                        // 0x0388 (size: 0x8)
    class UTextBlock* TownStatusAlertText;                                            // 0x0390 (size: 0x8)
    class UVitalityStatusWidget* PlayerVitality;                                      // 0x0398 (size: 0x8)
    class UVitalityStatusWidget* HorseVitality;                                       // 0x03A0 (size: 0x8)
    class UCanvasPanel* DisclaimerCanvas;                                             // 0x03A8 (size: 0x8)
    class UTextBlock* DisclaimerText;                                                 // 0x03B0 (size: 0x8)
    class UTexture2D* AranicLogo;                                                     // 0x03B8 (size: 0x8)
    class UTexture2D* MirrishLogo;                                                    // 0x03C0 (size: 0x8)
    class UTexture2D* NovanLogo;                                                      // 0x03C8 (size: 0x8)
    FSlateBrush GuardStrengthEmptyIcon;                                               // 0x03D0 (size: 0xD0)
    FSlateBrush GuardStrengthFillIcon;                                                // 0x04A0 (size: 0xD0)
    float LocalChatDisplayTime;                                                       // 0x0570 (size: 0x4)
    TArray<class UChatMessage*> NewLocalMessages;                                     // 0x0578 (size: 0x10)

    void PlayWinConditionAnimation();
    void PlayTownStatusAlert(const FText& AlertText);
    ESlateVisibility GetHUDWidgetVisibility();
}; // Size: 0x590

class UHUDWindow : public UUserWidget
{
    class AVisActor* WindowContext;                                                   // 0x0278 (size: 0x8)
    bool StructureToPlayerTransfer;                                                   // 0x0280 (size: 0x1)
    bool PlayerToStructureTransfer;                                                   // 0x0281 (size: 0x1)
    class UInventoryContainerWidget* StructureInventoryContainerWidget;               // 0x0298 (size: 0x8)
    class UPlayerInventoryWidget* PlayerInventoryPanel;                               // 0x02A0 (size: 0x8)
    class UHeaderContainer* TargetHeader;                                             // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UHeaderContainer : public UUserWidget
{
    FText HeaderText;                                                                 // 0x0278 (size: 0x18)
    int32 HeaderTextFontSize;                                                         // 0x0290 (size: 0x4)
    bool bHeaderWidthOverride;                                                        // 0x0294 (size: 0x1)
    float HeaderWidth;                                                                // 0x0298 (size: 0x4)
    float HeaderHeight;                                                               // 0x029C (size: 0x4)
    float UpperPadding;                                                               // 0x02A0 (size: 0x4)
    class UTextBlock* HeaderTextBox;                                                  // 0x02A8 (size: 0x8)
    class USizeBox* HeaderSizeBox;                                                    // 0x02B0 (size: 0x8)
    class USpacer* HeaderSpacer;                                                      // 0x02B8 (size: 0x8)
    class UWidget* TooltipButton;                                                     // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UHeatingWindow : public UStructureWindow
{
    class UInventoryWidget* ItemsItemGrid;                                            // 0x02D8 (size: 0x8)
    class UInventoryWidget* FuelInputItemGrid;                                        // 0x02E0 (size: 0x8)
    class UInventoryWidget* FuelOutputItemGrid;                                       // 0x02E8 (size: 0x8)
    class UTextBlock* FuelDurationText;                                               // 0x02F0 (size: 0x8)

    ESlateVisibility GetFuelDurationTextVisibility();
    FText GetFuelDurationText();
}; // Size: 0x2F8

class UHelpScreen : public UAnvilScreen
{
    class UButton* HelpImageButton;                                                   // 0x0288 (size: 0x8)

    void OnHelpImageButtonClicked();
}; // Size: 0x290

class UHitConversionWindow : public UStructureWindow
{
    class UImage* CurrentSelectedOutputImage;                                         // 0x02D8 (size: 0x8)
    class UButton* OutputPreviousButton;                                              // 0x02E0 (size: 0x8)
    class UButton* OutputNextButton;                                                  // 0x02E8 (size: 0x8)

    void OutputPreviousButtonClicked();
    void OutputNextButtonClicked();
}; // Size: 0x2F0

class UHousePlayerInventoryListItem : public UUserWidget
{
    class UTextBlock* PlayerNameText;                                                 // 0x0278 (size: 0x8)
    class UInventoryWidget* InventoryWidget;                                          // 0x0280 (size: 0x8)

}; // Size: 0x298

class UHousePlayerInventoryWidgetBox : public UScrollBox
{
    TSubclassOf<class UHousePlayerInventoryListItem> PlayerInventoryListItemType;     // 0x0C98 (size: 0x8)

}; // Size: 0xCA0

class UHouseWindow : public UStructureWindow
{
    class UHousePlayerInventoryWidgetBox* PlayerInventoriesBox;                       // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UInteractionIconWidget : public UUserWidget
{
    class UImage* IconBox;                                                            // 0x0278 (size: 0x8)

}; // Size: 0x280

class UInventoryContainerWidget : public UUserWidget
{
    class UInventoryWidget* UnderlyingInventoryWidget;                                // 0x0278 (size: 0x8)
    int32 PreviewItemCount;                                                           // 0x0280 (size: 0x4)
    float WidthOverride;                                                              // 0x0284 (size: 0x4)
    float HeightOverride;                                                             // 0x0288 (size: 0x4)
    uint8 bOverride_WidthOverride;                                                    // 0x028C (size: 0x1)
    uint8 bOverride_HeightOverride;                                                   // 0x028C (size: 0x1)
    class USizeBox* InventoryContainerSizeBox;                                        // 0x0290 (size: 0x8)
    FIntPoint PreferredDimension;                                                     // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UInventoryItemWidget : public UGridItemWidget
{
    int32 ItemQuantityTextSize;                                                       // 0x0318 (size: 0x4)
    FSlateColor DisabledTint;                                                         // 0x031C (size: 0x14)
    float DedicatedImageOpacity;                                                      // 0x0330 (size: 0x4)
    TMap<class EAnvilItemType, class UTexture2D*> EmptyImageMap;                      // 0x0338 (size: 0x50)
    class UTextBlock* ItemQuantityText;                                               // 0x0388 (size: 0x8)
    class UProgressBar* DurabilityBar;                                                // 0x0390 (size: 0x8)
    class UImage* SubtypeIconRelic;                                                   // 0x0398 (size: 0x8)
    class UImage* OverEncumberedImage;                                                // 0x03A0 (size: 0x8)
    class UProgressBar* HitConversionProgressBar;                                     // 0x03A8 (size: 0x8)
    class UImage* QualityIconImage;                                                   // 0x03B0 (size: 0x8)
    TMap<class EItemQualityType, class UTexture2D*> QualityIconTextures;              // 0x03B8 (size: 0x50)

}; // Size: 0x410

class UInventoryWidget : public UGridPanelWidget
{
    bool bIsPlayerInventory;                                                          // 0x01A8 (size: 0x1)

}; // Size: 0x1B0

class UMainAreaContainer : public UUserWidget
{
    class USizeBox* MainAreaSizeBox;                                                  // 0x0278 (size: 0x8)
    class UVerticalBox* MainAreaVerticalBox;                                          // 0x0280 (size: 0x8)
    class UNamedSlot* MainAreaSlot0;                                                  // 0x0288 (size: 0x8)
    class UNamedSlot* MainAreaSlot1;                                                  // 0x0290 (size: 0x8)
    class UNamedSlot* MainAreaSlot2;                                                  // 0x0298 (size: 0x8)
    float WidthOverride;                                                              // 0x02A0 (size: 0x4)
    float HeightOverride;                                                             // 0x02A4 (size: 0x4)
    float MinDesiredWidth;                                                            // 0x02A8 (size: 0x4)
    float MinDesiredHeight;                                                           // 0x02AC (size: 0x4)
    float MaxDesiredWidth;                                                            // 0x02B0 (size: 0x4)
    float MaxDesiredHeight;                                                           // 0x02B4 (size: 0x4)
    uint8 bOverride_WidthOverride;                                                    // 0x02B8 (size: 0x1)
    uint8 bOverride_HeightOverride;                                                   // 0x02B8 (size: 0x1)
    uint8 bOverride_MinDesiredWidth;                                                  // 0x02B8 (size: 0x1)
    uint8 bOverride_MinDesiredHeight;                                                 // 0x02B8 (size: 0x1)
    uint8 bOverride_MaxDesiredWidth;                                                  // 0x02B8 (size: 0x1)
    uint8 bOverride_MaxDesiredHeight;                                                 // 0x02B8 (size: 0x1)

}; // Size: 0x2C0

class UMapIcon : public UUserWidget
{
    class AActor* Marker;                                                             // 0x0278 (size: 0x8)
    FMapIconTypeProperty TypeProperty;                                                // 0x0280 (size: 0x30)
    FMapIconInstanceProperty InstanceProperty;                                        // 0x02B0 (size: 0x88)
    class UTextBlock* LabelBox;                                                       // 0x0340 (size: 0x8)
    class UImage* IconBox;                                                            // 0x0348 (size: 0x8)

    bool IsIconEnabled();
    ESlateVisibility GetIconVisibility();
}; // Size: 0x388

class UMapMarkerComponent : public UActorComponent
{
    FMapIconInstanceProperty MapIconProperty;                                         // 0x00A0 (size: 0x88)

}; // Size: 0x128

class UMapPostMapIcon : public UMapIcon
{
}; // Size: 0x388

class UMapWidget : public UUserWidget
{
    class UCanvasPanel* MapSheet;                                                     // 0x0278 (size: 0x8)
    TMap<class EMapIconType, class FMapIconTypeProperty> IconTemplates;               // 0x0280 (size: 0x50)
    FSlateColor EnemyIconColour;                                                      // 0x02D0 (size: 0x14)
    float ZoomSpeed;                                                                  // 0x0350 (size: 0x4)
    float ZoomMax;                                                                    // 0x0354 (size: 0x4)
    float ZoomAnimationTime;                                                          // 0x0358 (size: 0x4)
    class UImage* MapImageBox;                                                        // 0x0360 (size: 0x8)
    class UTexture2D* FogOfWarMask;                                                   // 0x0368 (size: 0x8)
    int32 FogOfWarRadius;                                                             // 0x0370 (size: 0x4)
    class UBorder* DeploymentInstructionOrSpawnTimerBorder;                           // 0x0380 (size: 0x8)
    class UTextBlock* DeploymentInstructionOrSpawnTimerText;                          // 0x0388 (size: 0x8)
    class UBorder* ObjectiveBorder;                                                   // 0x0390 (size: 0x8)
    TArray<class UMapIcon*> DisplayedBeaconTowerPlayerInfos;                          // 0x0408 (size: 0x10)

    ESlateVisibility GetRespawnTimerVisibility();
    FText GetRespawnTimerText();
    ESlateVisibility GetObjectiveBorderVisibility();
    void BP_OnMapImageSet(class UTexture2D* MapImage);
}; // Size: 0x428

class UMarketItemGridWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class UMarketItemWidget : public UGridItemWidget
{
    class UButton* PriceUpButton;                                                     // 0x02F0 (size: 0x8)
    class UButton* PriceDownButton;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* ItemQuantityText;                                               // 0x0300 (size: 0x8)
    class UTextBlock* PriceText;                                                      // 0x0308 (size: 0x8)
    class UEditableTextBox* PriceEditableText;                                        // 0x0310 (size: 0x8)
    class USizeBox* PriceTextSizeBox;                                                 // 0x0318 (size: 0x8)
    class USizeBox* PriceEditableTextSizeBox;                                         // 0x0320 (size: 0x8)
    class UProgressBar* DurabilityBar;                                                // 0x0328 (size: 0x8)

    void OnPriceUpClicked();
    void OnPriceTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnPriceDownClicked();
    bool IsPriceUpEnabled();
    bool IsPriceDownEnabled();
}; // Size: 0x338

class UMarketShopMapIcon : public UMapIcon
{
    TSubclassOf<class UMarketShopMapTooltip> TooltipClass;                            // 0x0388 (size: 0x8)
    class UMarketShopMapTooltip* CachedTooltip;                                       // 0x0390 (size: 0x8)

}; // Size: 0x398

class UMarketShopMapTooltip : public UUserWidget
{
    class UHeaderContainer* HeaderContainer;                                          // 0x0278 (size: 0x8)
    class UVerticalBox* MarketItemRowsVerticalBox;                                    // 0x0280 (size: 0x8)
    TSubclassOf<class UMarketShopMapTooltipRow> MarketTooltipRowType;                 // 0x0288 (size: 0x8)

}; // Size: 0x2A0

class UMarketShopMapTooltipRow : public UUserWidget
{
    class UGridItemWidget* ItemWidget;                                                // 0x0278 (size: 0x8)
    class UTextBlock* ItemCountText;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* PriceText;                                                      // 0x0288 (size: 0x8)

}; // Size: 0x290

class UMarketShopWindow : public UStructureWindow
{
    class UMarketItemGridWidget* MarketItemGrid;                                      // 0x02D8 (size: 0x8)
    class UStatusWidget* SilverStatus;                                                // 0x02E0 (size: 0x8)

    ESlateVisibility GetSilverAmountVisibility();
    FText GetSilverAmountText();
}; // Size: 0x2E8

class UOpeningScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* PlayButton;                                             // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* ExitButton;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* OptionsButton;                                          // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* RoadmapButton;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* Version;                                                        // 0x02A8 (size: 0x8)
    class UTextBlock* CL;                                                             // 0x02B0 (size: 0x8)
    class UButton* RoadmapPopupButton;                                                // 0x02B8 (size: 0x8)
    class UDisclaimerWidget* DisclaimerWidget;                                        // 0x02C0 (size: 0x8)
    class UTextBlock* AnnouncementText;                                               // 0x02C8 (size: 0x8)

    void OnRoadmapClicked();
    void OnRoadmapButtonClicked();
    void OnPlayButtonClicked();
    void OnOptionsButtonClicked();
    void OnExitButtonClicked();
    FText GetAnnouncementText();
}; // Size: 0x2D0

class UOptionsMenuAudioWidget : public UUserWidget
{
    class UAnvilSliderWidget* MasterVolumeSlider;                                     // 0x0278 (size: 0x8)
    class UAnvilSliderWidget* SFXVolumeSlider;                                        // 0x0280 (size: 0x8)
    class UAnvilSliderWidget* VoiceInputVolumeSlider;                                 // 0x0288 (size: 0x8)
    class UAnvilSliderWidget* VoiceOutputVolumeSlider;                                // 0x0290 (size: 0x8)
    class UAnvilDropdownEntryWidget* VoiceInDropdown;                                 // 0x0298 (size: 0x8)
    class UAnvilDropdownEntryWidget* VoiceOutDropdown;                                // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* ReconnectButton;                                        // 0x02A8 (size: 0x8)

    void OnReconnectToVoice();
    bool IsReconnectButtonEnabled();
    ESlateVisibility GetReconnectButtonVisibility();
}; // Size: 0x2C0

class UOptionsMenuGameplayWidget : public UUserWidget
{
    class UAnvilDropdownEntryWidget* ShowPlayerNameDropDown;                          // 0x0278 (size: 0x8)

}; // Size: 0x280

class UOptionsMenuKeybindWidget : public UUserWidget
{
    class UPanelWidget* KeybindWidgetContainer;                                       // 0x0278 (size: 0x8)
    class UAnvilButtonWidget* ResetButton;                                            // 0x0280 (size: 0x8)

    void OnResetKeyBinds();
}; // Size: 0x2A0

class UOptionsMenuVideoWidget : public UUserWidget
{
    class UAnvilDropdownEntryWidget* FullscreenDropdown;                              // 0x0278 (size: 0x8)
    class UAnvilDropdownEntryWidget* ResolutionDropdown;                              // 0x0280 (size: 0x8)
    class UAnvilDropdownEntryWidget* QualityDropdown;                                 // 0x0288 (size: 0x8)
    class UAnvilDropdownEntryWidget* VSyncDropdown;                                   // 0x0290 (size: 0x8)

    void OnFullscreenModeChanged(FString Input);
}; // Size: 0x298

class UOptionsScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* BackButton;                                             // 0x0288 (size: 0x8)
    class UPanelWidget* ButtonsPanel;                                                 // 0x0290 (size: 0x8)
    class UWidgetSwitcher* OptionsPanel;                                              // 0x0298 (size: 0x8)

    void OnBackButtonClicked();
}; // Size: 0x2A0

class UPauseScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* ResumeButton;                                           // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* OptionsButton;                                          // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* HelpButton;                                             // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* CodeOfConductButton;                                    // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* LogOffButton;                                           // 0x02A8 (size: 0x8)
    class UAnvilButtonWidget* ExitButton;                                             // 0x02B0 (size: 0x8)
    class UButton* DiscordSignUpButton;                                               // 0x02B8 (size: 0x8)

    void OnOptionsButtonClicked();
    void OnLogOffButtonClicked();
    void OnHelpButtonClicked();
    void OnExitButtonConfirmed();
    void OnExitButtonClicked();
    void OnDiscordSignUpButtonClicked();
    void OnContinueButtonClicked();
    void OnCodeOfConductButtonClicked();
}; // Size: 0x2C0

class UPlayerInventoryWidget : public UUserWidget
{
    class UInventoryWidget* PlayerInventory;                                          // 0x0278 (size: 0x8)
    class UHeaderContainer* Header;                                                   // 0x0280 (size: 0x8)

}; // Size: 0x288

class UPledgedPlayerBox : public UScrollBox
{
    TSubclassOf<class UPledgedPlayerListItem> ListItemType;                           // 0x0C98 (size: 0x8)

    void OnVoteChecked(bool bIsChecked, uint64 PlayerId);
}; // Size: 0xCA0

class UPledgedPlayerListItem : public UUserWidget
{
    class UTextBlock* PlayerNameText;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* PlayerStatusText;                                               // 0x0290 (size: 0x8)
    class UCheckBox* VoteButton;                                                      // 0x0298 (size: 0x8)
    class UImage* OnlineStatusIcon;                                                   // 0x02A0 (size: 0x8)
    TMap<class EPledgedOnlineStatus, class UTexture2D*> OnlineStatusIconMap;          // 0x02A8 (size: 0x50)
    TMap<class EPledgedOnlineStatus, class FSlateColor> OnlineStatusColorMap;         // 0x02F8 (size: 0x50)

    void OnVoteChecked(bool bIsChecked);
}; // Size: 0x350

class UQuenchingWindow : public UStructureWindow
{
    class UButton* QuenchButton;                                                      // 0x02D8 (size: 0x8)

    void OnQuenchButtonClicked();
}; // Size: 0x2E0

class URefineryProducibleItemWidget : public UGridItemWidget
{
    class UTextBlock* OutputCount;                                                    // 0x02F0 (size: 0x8)
    class UPanelWidget* OutputCountContainer;                                         // 0x02F8 (size: 0x8)

}; // Size: 0x300

class URefineryProducibleListWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class URefineryQueueWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class URefineryQueuedItemWidget : public UGridItemWidget
{
    class UButton* CancelButton;                                                      // 0x02F0 (size: 0x8)
    class UImage* PrivateIcon;                                                        // 0x02F8 (size: 0x8)
    class UBorder* ItemBorder;                                                        // 0x0300 (size: 0x8)
    FSlateBrush ItemBorderBrush;                                                      // 0x0310 (size: 0xD0)
    FSlateBrush ItemBorderOtherPlayerBrush;                                           // 0x03E0 (size: 0xD0)

    void OnCancelClicked();
}; // Size: 0x4B0

class URefineryWindow : public UStructureWindow
{
    class URefineryProducibleListWidget* RefineryProducibleItemsList;                 // 0x02D8 (size: 0x8)
    class URefineryQueueWidget* RefineryQueue;                                        // 0x02E0 (size: 0x8)
    class UTextBlock* QueueTotalTimeText;                                             // 0x02E8 (size: 0x8)
    class UTextBlock* QueueTimeText;                                                  // 0x02F0 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x02F8 (size: 0x8)
    class UButton* PrivateButton;                                                     // 0x0300 (size: 0x8)
    FButtonStyle PrivateButtonStyleOn;                                                // 0x0310 (size: 0x3F0)
    FButtonStyle PrivateButtonStyleOff;                                               // 0x0700 (size: 0x3F0)

    void OnStatusChanged(const bool& Old, const bool& New);
    void OnPrivateButtonClicked();
}; // Size: 0xB00

class URelicTechCenterWindow : public UStructureWindow
{
    class UVerticalBox* TechProgressVerticalBox;                                      // 0x02D8 (size: 0x8)
    TSubclassOf<class URelicTechProgressWidget> RelicTechProgressWidgetClass;         // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class URelicTechProgressWidget : public UUserWidget
{
    class UImage* ItemImage;                                                          // 0x0278 (size: 0x8)
    class UProgressBar* TechProgressBar;                                              // 0x0280 (size: 0x8)

    bool IsImageEnabled();
    float GetNormalizedProgress();
}; // Size: 0x290

class URepairStationWindow : public UStructureWindow
{
    class UButton* RepairButton;                                                      // 0x02D8 (size: 0x8)

    void OnRepairClicked();
}; // Size: 0x2E0

class UResourceWidget : public UUserWidget
{
    class UImage* ResourceIcon;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* ResourceText;                                                   // 0x0280 (size: 0x8)

}; // Size: 0x288

class UScorchEffectComponent : public UNiagaraComponent
{
    float ScorchThreshold;                                                            // 0x07D0 (size: 0x4)

}; // Size: 0x7E0

class UServerListEntryView : public UObject
{
    FServerListEntry ServerListEntry;                                                 // 0x0028 (size: 0x30)

}; // Size: 0x58

class UServerListEntryWidget : public UUserWidget
{
    class UButton* ServerListEntryButton;                                             // 0x0280 (size: 0x8)
    class UTextBlock* ServerNameTextBlock;                                            // 0x0288 (size: 0x8)
    class UTextBlock* AranicPopulationTextBlock;                                      // 0x0290 (size: 0x8)
    class UTextBlock* MirrishPopulationTextBlock;                                     // 0x0298 (size: 0x8)
    class UTextBlock* NovanPopulationTextBlock;                                       // 0x02A0 (size: 0x8)
    FSlateColor PopulationOpenColour;                                                 // 0x02A8 (size: 0x14)
    FSlateColor PopulationFullColour;                                                 // 0x02BC (size: 0x14)
    TMap<class FString, class FString> ServerDisplayNames;                            // 0x02D0 (size: 0x50)

    void OnServerEntryClicked();
}; // Size: 0x320

class UServerPartitionComponent : public UActorComponent
{
    bool bVisualizeCookedRegion;                                                      // 0x00A0 (size: 0x1)
    FVector Extents;                                                                  // 0x00A8 (size: 0x18)
    int32 ServerRegionCountX;                                                         // 0x00C0 (size: 0x4)
    int32 ServerRegionCountY;                                                         // 0x00C4 (size: 0x4)
    float TransitionRegionSize;                                                       // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UServerSelectScreen : public UAnvilScreen
{
    class UListView* ServerList;                                                      // 0x0288 (size: 0x8)

}; // Size: 0x290

class UStatusWidget : public UUserWidget
{
    class UTexture2D* IconTexture;                                                    // 0x0278 (size: 0x8)
    ESimpleTooltip SimpleTooltip;                                                     // 0x0280 (size: 0x1)
    class UImage* StatusIcon;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0290 (size: 0x8)
    class UTexture2D* HappyIconTexture;                                               // 0x0298 (size: 0x8)
    class UTexture2D* UnhappyIconTexture;                                             // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UStructureWindow : public UHUDWindow
{
    class UStatusWidget* HealthStatus;                                                // 0x02B0 (size: 0x8)
    class UStatusWidget* HeartStatus;                                                 // 0x02B8 (size: 0x8)
    class UStatusWidget* HungerStatus;                                                // 0x02C0 (size: 0x8)
    class UStatusWidget* StaminaStatus;                                               // 0x02C8 (size: 0x8)
    class UStatusWidget* DecayStatus;                                                 // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class USubHeaderContainer : public UUserWidget
{
    float SubHeaderWidth;                                                             // 0x0278 (size: 0x4)
    float SubHeaderHeight;                                                            // 0x027C (size: 0x4)
    class USizeBox* SubHeaderSizeBox;                                                 // 0x0280 (size: 0x8)
    class UNamedSlot* SubHeaderSlot0;                                                 // 0x0288 (size: 0x8)

}; // Size: 0x290

class UTooltipWidget : public UUserWidget
{
    TSubclassOf<class UResourceWidget> ResourceWidgetClass;                           // 0x0278 (size: 0x8)
    class UTextBlock* HeaderText;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* BodyText;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* BodyExtraText;                                                  // 0x0290 (size: 0x8)
    class URichTextBlock* FooterText;                                                 // 0x0298 (size: 0x8)
    class UBorder* ResourceBar;                                                       // 0x02A0 (size: 0x8)
    TArray<class UResourceWidget*> ResourceWidgets;                                   // 0x02A8 (size: 0x10)
    class UHorizontalBox* ResourcesContainer;                                         // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class UTownCenterMapIcon : public UMapIcon
{
    class AVisTownCenter* TownCenter;                                                 // 0x0388 (size: 0x8)
    float FlashingFrequency;                                                          // 0x0390 (size: 0x4)
    float FlashingMinOpacity;                                                         // 0x0394 (size: 0x4)
    class UButton* IconButton;                                                        // 0x0398 (size: 0x8)
    class UTextBlock* TownName;                                                       // 0x03A0 (size: 0x8)
    class UBorder* TownNameBorder;                                                    // 0x03A8 (size: 0x8)
    class UBorder* TownStatusBorder;                                                  // 0x03B0 (size: 0x8)
    class UStatusWidget* NumHousesStatus;                                             // 0x03B8 (size: 0x8)
    class UStatusWidget* NumTentsStatus;                                              // 0x03C0 (size: 0x8)
    class UStatusWidget* NumReinforcementSuppliesStatus;                              // 0x03C8 (size: 0x8)

    void UpdateName();
    void OnClicked();
    FText GetNumTentsText();
    FText GetNumReinforcementSuppliesText();
    FText GetNumHousesText();
}; // Size: 0x3D0

class UTownCenterWindow : public UStructureWindow
{
    class UPledgedPlayerBox* PledgedPlayerList;                                       // 0x02D8 (size: 0x8)
    class UTextBlock* LocalPlayerStatus;                                              // 0x02E0 (size: 0x8)
    class UProgressBar* LocalPlayerStatusProgress;                                    // 0x02E8 (size: 0x8)
    class UUserWidget* CivicPledgePanel;                                              // 0x02F0 (size: 0x8)
    class UHeaderContainer* TechHeaderContainer;                                      // 0x02F8 (size: 0x8)
    class UHeaderContainer* PledgedHeader;                                            // 0x0300 (size: 0x8)
    class UFooterContainer* TechFooterContainer;                                      // 0x0308 (size: 0x8)
    class UProgressBar* TechProgress;                                                 // 0x0310 (size: 0x8)
    class UStatusWidget* RareResourceStatus;                                          // 0x0318 (size: 0x8)
    TArray<FText> TownNames1;                                                         // 0x0320 (size: 0x10)
    TArray<FText> TownNames2;                                                         // 0x0330 (size: 0x10)
    TArray<FText> TownNames3;                                                         // 0x0340 (size: 0x10)

}; // Size: 0x350

class UTownStatusWidget : public UUserWidget
{
    class UStatusWidget* PopulationStatus;                                            // 0x0278 (size: 0x8)
    class UStatusWidget* MilitiaPopulationStatus;                                     // 0x0280 (size: 0x8)
    class UStatusWidget* HappinessStatus;                                             // 0x0288 (size: 0x8)
    class UStatusWidget* FoodStatus;                                                  // 0x0290 (size: 0x8)
    class UStatusWidget* TaxStatus;                                                   // 0x0298 (size: 0x8)
    class UStatusWidget* SilverStatus;                                                // 0x02A0 (size: 0x8)

    void UpdateStatus();
}; // Size: 0x2A8

class UVisAnimalAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    EAnvilAnimalState NativeCurrentState;                                             // 0x034C (size: 0x1)
    bool IsReceivingIncomingAttack;                                                   // 0x034D (size: 0x1)

}; // Size: 0x350

class UVisBatteringRamAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    float RotationalSpeedYaw;                                                         // 0x034C (size: 0x4)
    bool bIsOccupied;                                                                 // 0x0350 (size: 0x1)

}; // Size: 0x360

class UVisBuildGhostComponent : public UActorComponent
{
    FLinearColor ValidPlacementColour;                                                // 0x00A0 (size: 0x10)
    FLinearColor InvalidPlacementColour;                                              // 0x00B0 (size: 0x10)
    class UDecalComponent* BuildCollisionDecalComponent;                              // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UVisFoundationDecorMesh : public UStaticMeshComponent
{
}; // Size: 0x600

class UVisGateAnimInstance : public UAnimInstance
{
    bool bIsOpen;                                                                     // 0x0348 (size: 0x1)

}; // Size: 0x350

class UVisHorseAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    float NativeHorizontalMovement;                                                   // 0x034C (size: 0x4)
    float NativeVerticalMovement;                                                     // 0x0350 (size: 0x4)

}; // Size: 0x360

class UVisItem : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    FText NameText;                                                                   // 0x0040 (size: 0x18)
    FText DescriptionText;                                                            // 0x0058 (size: 0x18)
    FText DescriptionFooter;                                                          // 0x0070 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0088 (size: 0x8)
    class USkeletalMesh* Mesh;                                                        // 0x0090 (size: 0x8)
    class UStaticMesh* StockpileMesh;                                                 // 0x0098 (size: 0x8)
    bool bAutoSetStockpileExtents;                                                    // 0x00A0 (size: 0x1)
    FVector StockpileExtents;                                                         // 0x00A8 (size: 0x18)
    FVector StockpileOffset;                                                          // 0x00C0 (size: 0x18)
    FRotator StockpileRotation;                                                       // 0x00D8 (size: 0x18)
    bool bStockpileDefaultRotate;                                                     // 0x00F0 (size: 0x1)
    int8 StockpileOrder;                                                              // 0x00F1 (size: 0x1)
    TMap<class EAnvilFactionId, class USkeletalMesh*> FactionMeshOverrides;           // 0x00F8 (size: 0x50)
    EEquippedItemGripType GripType;                                                   // 0x0148 (size: 0x1)
    TSubclassOf<class UAnimInstance> AnimClass;                                       // 0x0150 (size: 0x8)
    FRotator MeshRotation;                                                            // 0x0158 (size: 0x18)
    EUnarmedItemMeshLocation UnarmedMeshLocation;                                     // 0x0170 (size: 0x1)
    FVector UnarmedMeshOffset;                                                        // 0x0178 (size: 0x18)
    FRotator UnarmedMeshRotation;                                                     // 0x0190 (size: 0x18)
    float UnarmedMeshScale;                                                           // 0x01A8 (size: 0x4)
    int32 AnimationIndex;                                                             // 0x01AC (size: 0x4)
    TMap<class EAnvilSimActivityState, class UAnimMontage*> ActivityStateMontageMap;  // 0x01B0 (size: 0x50)
    class USoundCue* TransferSoundCue;                                                // 0x0200 (size: 0x8)
    class USoundCue* ArmingSoundCue;                                                  // 0x0208 (size: 0x8)

}; // Size: 0x210

class UVisLadderVehicleAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    bool bIsFrontSeatOccupied;                                                        // 0x034C (size: 0x1)
    bool bIsRearSeatOccupied;                                                         // 0x034D (size: 0x1)

}; // Size: 0x350

class UVisMobileWeaponAnimInstance : public UAnimInstance
{
    float AimYaw;                                                                     // 0x0348 (size: 0x4)
    float AimPitch;                                                                   // 0x034C (size: 0x4)
    bool bPriming;                                                                    // 0x0350 (size: 0x1)
    bool bPrimed;                                                                     // 0x0351 (size: 0x1)

}; // Size: 0x360

class UVisMultiItemStockpileComponent : public USceneComponent
{
    TSubclassOf<class UVisItem> TestItem;                                             // 0x02A0 (size: 0x8)
    FVector StockpileExtents;                                                         // 0x02A8 (size: 0x18)
    float LevelHeight;                                                                // 0x02C0 (size: 0x4)
    bool bDefaultRotate;                                                              // 0x02C4 (size: 0x1)
    TArray<class UStaticMeshComponent*> DisplayedMeshes;                              // 0x02C8 (size: 0x10)
    class UCollisionVisualizerComponent* BoxVisualizer;                               // 0x02D8 (size: 0x8)

}; // Size: 0x2F0

class UVisPlayerAnimInstance : public UAnimInstance
{
    bool bNativeIsAttacking;                                                          // 0x0348 (size: 0x1)
    float NativeDir;                                                                  // 0x034C (size: 0x4)
    float NativeSpeed;                                                                // 0x0350 (size: 0x4)
    EEquippedItemGripType GripType;                                                   // 0x0354 (size: 0x1)
    EEquippedItemGripType PrimaryGripType;                                            // 0x0355 (size: 0x1)
    EEquippedItemGripType SecondaryGripType;                                          // 0x0356 (size: 0x1)
    EAnvilCharacterStance NativeStance;                                               // 0x0357 (size: 0x1)
    EAnvilVehicleInputState VehicleInputState;                                        // 0x0358 (size: 0x1)
    EIncomingAttackDirection IncomingAttackDirection;                                 // 0x0359 (size: 0x1)
    int32 NativePoseIndex;                                                            // 0x035C (size: 0x4)
    bool NativeIsAiming;                                                              // 0x0360 (size: 0x1)
    bool NativeIsCrouching;                                                           // 0x0361 (size: 0x1)
    bool bNativeIsGuarding;                                                           // 0x0362 (size: 0x1)
    bool bNativeIsSecondaryEquipped;                                                  // 0x0363 (size: 0x1)
    float AimPitch;                                                                   // 0x0364 (size: 0x4)
    float AimYaw;                                                                     // 0x0368 (size: 0x4)
    bool bPriming;                                                                    // 0x036C (size: 0x1)

}; // Size: 0x390

class UVisPlayerVisualsComponent : public UActorComponent
{
}; // Size: 0xA0

class UVisScaffoldingComponent : public USceneComponent
{
    class UStaticMesh* Scaffolding1;                                                  // 0x02A0 (size: 0x8)
    class UStaticMesh* Scaffolding2;                                                  // 0x02A8 (size: 0x8)
    class UStaticMesh* ScaffoldingCorner;                                             // 0x02B0 (size: 0x8)
    class UMaterialInterface* GhostMaterial;                                          // 0x02B8 (size: 0x8)

}; // Size: 0x2D0

class UVisSingleItemStockpileComponent : public UStaticMeshComponent
{
    int32 InventorySlotIndex;                                                         // 0x05F0 (size: 0x4)
    class UStaticMesh* DefaultItemMesh;                                               // 0x05F8 (size: 0x8)

}; // Size: 0x620

class UVisSplineComponent : public USceneComponent
{
    class UDecalComponent* GroundDecalComponent;                                      // 0x02A0 (size: 0x8)
    float PreviewPieceLength;                                                         // 0x02A8 (size: 0x4)
    FVector PreviewEndLocation;                                                       // 0x02B0 (size: 0x18)
    FVector PreviewBridgeStartOffSet;                                                 // 0x02C8 (size: 0x18)
    class UMaterialInterface* DecalMaterial;                                          // 0x02E0 (size: 0x8)
    class UMaterial* MaterialOverride;                                                // 0x02E8 (size: 0x8)
    class UStaticMesh* EndPieceMesh;                                                  // 0x02F0 (size: 0x8)
    TArray<class UStaticMesh*> MidPieceMeshes;                                        // 0x02F8 (size: 0x10)
    class USplineDataComponent* SplineDataComponent;                                  // 0x0310 (size: 0x8)
    TArray<class UStaticMeshComponent*> MidPieces;                                    // 0x0318 (size: 0x10)
    TArray<class UStaticMeshComponent*> EndPieces;                                    // 0x0328 (size: 0x10)

}; // Size: 0x350

class UVisSpringArmComponent : public USpringArmComponent
{
}; // Size: 0x3B0

class UVisStaticMeshComponent : public UStaticMeshComponent
{
    EVisMeshProfile VisMeshProfile;                                                   // 0x05F0 (size: 0x1)
    bool bMeshVisibility;                                                             // 0x05F1 (size: 0x1)

}; // Size: 0x600

class UVisStockpileComponent : public UInstancedStaticMeshComponent
{
    class UInstancedStaticMeshComponent* CurrentInstancedMesh;                        // 0x0738 (size: 0x8)

}; // Size: 0x750

class UVisTeamMeshComponent : public UStaticMeshComponent
{
    class UStaticMesh* TeamMeshAranic;                                                // 0x05F0 (size: 0x8)
    class UStaticMesh* TeamMeshMirrish;                                               // 0x05F8 (size: 0x8)
    class UStaticMesh* TeamMeshNovan;                                                 // 0x0600 (size: 0x8)

}; // Size: 0x610

class UVisTownAreaMarkerDecalComponent : public UDecalComponent
{
    class UMaterialInterface* TeamDecalAranic;                                        // 0x02F0 (size: 0x8)
    class UMaterialInterface* TeamDecalMirrish;                                       // 0x02F8 (size: 0x8)
    class UMaterialInterface* TeamDecalNovan;                                         // 0x0300 (size: 0x8)

    void SetRangeParameters(const EAnvilFactionId FactionId, float Radius);
}; // Size: 0x310

class UVitalityStatusWidget : public UUserWidget
{
    class UProgressBar* HungerBar;                                                    // 0x0278 (size: 0x8)
    class UOverlay* HealthOverlay;                                                    // 0x0280 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0288 (size: 0x8)
    class UOverlay* StaminaOverlay;                                                   // 0x0290 (size: 0x8)
    class UProgressBar* StaminaBar;                                                   // 0x0298 (size: 0x8)

}; // Size: 0x2C0

class UWildSpawnPointMapIcon : public UMapIcon
{
    class UButton* IconButton;                                                        // 0x0388 (size: 0x8)

    void OnClicked();
}; // Size: 0x390

#endif
