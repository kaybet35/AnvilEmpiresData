---@meta

---@class AOnlineBeacon : AActor
---@field BeaconConnectionInitialTimeout float
---@field BeaconConnectionTimeout float
---@field NetDriver UNetDriver
local AOnlineBeacon = {}



---@class AOnlineBeaconClient : AOnlineBeacon
---@field BeaconOwner AOnlineBeaconHostObject
---@field BeaconConnection UNetConnection
---@field ConnectionState EBeaconConnectionState
local AOnlineBeaconClient = {}

function AOnlineBeaconClient:ClientOnConnected() end


---@class AOnlineBeaconHost : AOnlineBeacon
---@field ListenPort int32
---@field bAuthRequired boolean
---@field MaxAuthTokenSize uint32
---@field ClientActors TArray<AOnlineBeaconClient>
local AOnlineBeaconHost = {}



---@class AOnlineBeaconHostObject : AActor
---@field BeaconTypeName FString
---@field ClientBeaconActorClass TSubclassOf<AOnlineBeaconClient>
---@field ClientActors TArray<AOnlineBeaconClient>
local AOnlineBeaconHostObject = {}



---@class APartyBeaconClient : AOnlineBeaconClient
---@field DestSessionId FString
---@field PendingReservation FPartyReservation
---@field RequestType EClientRequestType
---@field bPendingReservationSent boolean
---@field bCancelReservation boolean
local APartyBeaconClient = {}

---@param SessionId FString
---@param ReservationUpdate FPartyReservation
function APartyBeaconClient:ServerUpdateReservationRequest(SessionId, ReservationUpdate) end
---@param SessionId FString
---@param Reservation FPartyReservation
function APartyBeaconClient:ServerReservationRequest(SessionId, Reservation) end
---@param SessionId FString
---@param ReservationUpdate FPartyReservation
function APartyBeaconClient:ServerRemoveMemberFromReservationRequest(SessionId, ReservationUpdate) end
---@param PartyLeader FUniqueNetIdRepl
function APartyBeaconClient:ServerCancelReservationRequest(PartyLeader) end
---@param SessionId FString
---@param Reservation FPartyReservation
function APartyBeaconClient:ServerAddOrUpdateReservationRequest(SessionId, Reservation) end
---@param NumRemainingReservations int32
function APartyBeaconClient:ClientSendReservationUpdates(NumRemainingReservations) end
function APartyBeaconClient:ClientSendReservationFull() end
---@param ReservationResponse EPartyReservationResult::Type
function APartyBeaconClient:ClientReservationResponse(ReservationResponse) end
---@param ReservationResponse EPartyReservationResult::Type
function APartyBeaconClient:ClientCancelReservationResponse(ReservationResponse) end


---@class APartyBeaconHost : AOnlineBeaconHostObject
---@field State UPartyBeaconState
---@field bLogoutOnSessionTimeout boolean
---@field SessionTimeoutSecs float
---@field TravelSessionTimeoutSecs float
local APartyBeaconHost = {}



---@class ASpectatorBeaconClient : AOnlineBeaconClient
---@field DestSessionId FString
---@field PendingReservation FSpectatorReservation
---@field RequestType ESpectatorClientRequestType
---@field bPendingReservationSent boolean
---@field bCancelReservation boolean
local ASpectatorBeaconClient = {}

---@param SessionId FString
---@param Reservation FSpectatorReservation
function ASpectatorBeaconClient:ServerReservationRequest(SessionId, Reservation) end
---@param Spectator FUniqueNetIdRepl
function ASpectatorBeaconClient:ServerCancelReservationRequest(Spectator) end
---@param NumRemainingReservations int32
function ASpectatorBeaconClient:ClientSendReservationUpdates(NumRemainingReservations) end
function ASpectatorBeaconClient:ClientSendReservationFull() end
---@param ReservationResponse ESpectatorReservationResult::Type
function ASpectatorBeaconClient:ClientReservationResponse(ReservationResponse) end
---@param ReservationResponse ESpectatorReservationResult::Type
function ASpectatorBeaconClient:ClientCancelReservationResponse(ReservationResponse) end


---@class ASpectatorBeaconHost : AOnlineBeaconHostObject
---@field State USpectatorBeaconState
---@field bLogoutOnSessionTimeout boolean
---@field SessionTimeoutSecs float
---@field TravelSessionTimeoutSecs float
local ASpectatorBeaconHost = {}



---@class ATestBeaconClient : AOnlineBeaconClient
local ATestBeaconClient = {}

function ATestBeaconClient:ServerPong() end
function ATestBeaconClient:ClientPing() end


---@class ATestBeaconHost : AOnlineBeaconHostObject
local ATestBeaconHost = {}


---@class FBlueprintSessionResult
local FBlueprintSessionResult = {}


---@class FInAppPurchaseProductInfo2
---@field Identifier FString
---@field TransactionIdentifier FString
---@field DisplayName FString
---@field DisplayDescription FString
---@field DisplayPrice FString
---@field RawPrice float
---@field CurrencyCode FString
---@field CurrencySymbol FString
---@field DecimalSeparator FString
---@field GroupingSeparator FString
---@field ReceiptData FString
---@field DynamicFields TMap<FString, FString>
local FInAppPurchaseProductInfo2 = {}



---@class FInAppPurchaseProductRequest2
---@field ProductIdentifier FString
---@field bIsConsumable boolean
local FInAppPurchaseProductRequest2 = {}



---@class FInAppPurchaseReceiptInfo2
---@field ItemName FString
---@field ItemId FString
---@field ValidationInfo FString
local FInAppPurchaseReceiptInfo2 = {}



---@class FInAppPurchaseRestoreInfo2
---@field ItemName FString
---@field ItemId FString
---@field ValidationInfo FString
local FInAppPurchaseRestoreInfo2 = {}



---@class FOnlineProxyStoreOffer
---@field OfferId FString
---@field Title FText
---@field Description FText
---@field LongDescription FText
---@field RegularPriceText FText
---@field RegularPrice int32
---@field PriceText FText
---@field NumericPrice int32
---@field CurrencyCode FString
---@field ReleaseDate FDateTime
---@field ExpirationDate FDateTime
---@field DiscountType EOnlineProxyStoreOfferDiscountType
---@field DynamicFields TMap<FString, FString>
local FOnlineProxyStoreOffer = {}



---@class FPIELoginSettingsInternal
---@field ID FString
---@field Token FString
---@field Type FString
---@field TokenBytes TArray<uint8>
local FPIELoginSettingsInternal = {}



---@class FPartyBeaconCrossplayPlatformMapping
---@field PlatformName FString
---@field PlatformType FString
local FPartyBeaconCrossplayPlatformMapping = {}



---@class FPartyReservation
---@field TeamNum int32
---@field PartyLeader FUniqueNetIdRepl
---@field PartyMembers TArray<FPlayerReservation>
---@field RemovedPartyMembers TArray<FPlayerReservation>
local FPartyReservation = {}



---@class FPlayerReservation
---@field UniqueId FUniqueNetIdRepl
---@field ValidationStr FString
---@field Platform FString
---@field bAllowCrossplay boolean
---@field ElapsedTime float
local FPlayerReservation = {}



---@class FSpectatorReservation
---@field SpectatorId FUniqueNetIdRepl
---@field Spectator FPlayerReservation
local FSpectatorReservation = {}



---@class UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
local UAchievementBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementID FName
---@param bFoundID boolean
---@param Progress float
function UAchievementBlueprintLibrary:GetCachedAchievementProgress(WorldContextObject, PlayerController, AchievementID, bFoundID, Progress) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementID FName
---@param bFoundID boolean
---@param Title FText
---@param LockedDescription FText
---@param UnlockedDescription FText
---@param bHidden boolean
function UAchievementBlueprintLibrary:GetCachedAchievementDescription(WorldContextObject, PlayerController, AchievementID, bFoundID, Title, LockedDescription, UnlockedDescription, bHidden) end


---@class UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FAchievementQueryCallbackProxyOnSuccess
---@field OnFailure FAchievementQueryCallbackProxyOnFailure
local UAchievementQueryCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UAchievementQueryCallbackProxy
function UAchievementQueryCallbackProxy:CacheAchievements(WorldContextObject, PlayerController) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UAchievementQueryCallbackProxy
function UAchievementQueryCallbackProxy:CacheAchievementDescriptions(WorldContextObject, PlayerController) end


---@class UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FAchievementWriteCallbackProxyOnSuccess
---@field OnFailure FAchievementWriteCallbackProxyOnFailure
local UAchievementWriteCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AchievementName FName
---@param Progress float
---@param UserTag int32
---@return UAchievementWriteCallbackProxy
function UAchievementWriteCallbackProxy:WriteAchievementProgress(WorldContextObject, PlayerController, AchievementName, Progress, UserTag) end


---@class UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FConnectionCallbackProxyOnSuccess
---@field OnFailure FConnectionCallbackProxyOnFailure
local UConnectionCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UConnectionCallbackProxy
function UConnectionCallbackProxy:ConnectToService(WorldContextObject, PlayerController) end


---@class UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FCreateSessionCallbackProxyOnSuccess
---@field OnFailure FCreateSessionCallbackProxyOnFailure
local UCreateSessionCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param PublicConnections int32
---@param bUseLAN boolean
---@return UCreateSessionCallbackProxy
function UCreateSessionCallbackProxy:CreateSession(WorldContextObject, PlayerController, PublicConnections, bUseLAN) end


---@class UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FDestroySessionCallbackProxyOnSuccess
---@field OnFailure FDestroySessionCallbackProxyOnFailure
local UDestroySessionCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return UDestroySessionCallbackProxy
function UDestroySessionCallbackProxy:DestroySession(WorldContextObject, PlayerController) end


---@class UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FEndMatchCallbackProxyOnSuccess
---@field OnFailure FEndMatchCallbackProxyOnFailure
local UEndMatchCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchActor TScriptInterface<ITurnBasedMatchInterface>
---@param MatchID FString
---@param LocalPlayerOutcome EMPMatchOutcome::Type
---@param OtherPlayersOutcome EMPMatchOutcome::Type
---@return UEndMatchCallbackProxy
function UEndMatchCallbackProxy:EndMatch(WorldContextObject, PlayerController, MatchActor, MatchID, LocalPlayerOutcome, OtherPlayersOutcome) end


---@class UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FEndTurnCallbackProxyOnSuccess
---@field OnFailure FEndTurnCallbackProxyOnFailure
local UEndTurnCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID FString
---@param TurnBasedMatchInterface TScriptInterface<ITurnBasedMatchInterface>
---@return UEndTurnCallbackProxy
function UEndTurnCallbackProxy:EndTurn(WorldContextObject, PlayerController, MatchID, TurnBasedMatchInterface) end


---@class UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FFindSessionsCallbackProxyOnSuccess
---@field OnFailure FFindSessionsCallbackProxyOnFailure
local UFindSessionsCallbackProxy = {}

---@param Result FBlueprintSessionResult
---@return FString
function UFindSessionsCallbackProxy:GetServerName(Result) end
---@param Result FBlueprintSessionResult
---@return int32
function UFindSessionsCallbackProxy:GetPingInMs(Result) end
---@param Result FBlueprintSessionResult
---@return int32
function UFindSessionsCallbackProxy:GetMaxPlayers(Result) end
---@param Result FBlueprintSessionResult
---@return int32
function UFindSessionsCallbackProxy:GetCurrentPlayers(Result) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MaxResults int32
---@param bUseLAN boolean
---@return UFindSessionsCallbackProxy
function UFindSessionsCallbackProxy:FindSessions(WorldContextObject, PlayerController, MaxResults, bUseLAN) end


---@class UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FFindTurnBasedMatchCallbackProxyOnSuccess
---@field OnFailure FFindTurnBasedMatchCallbackProxyOnFailure
local UFindTurnBasedMatchCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchActor TScriptInterface<ITurnBasedMatchInterface>
---@param MinPlayers int32
---@param MaxPlayers int32
---@param PlayerGroup int32
---@param ShowExistingMatches boolean
---@return UFindTurnBasedMatchCallbackProxy
function UFindTurnBasedMatchCallbackProxy:FindTurnBasedMatch(WorldContextObject, PlayerController, MatchActor, MinPlayers, MaxPlayers, PlayerGroup, ShowExistingMatches) end


---@class UInAppPurchaseCallbackProxy2 : UObject
---@field OnSuccess FInAppPurchaseCallbackProxy2OnSuccess
---@field OnFailure FInAppPurchaseCallbackProxy2OnFailure
local UInAppPurchaseCallbackProxy2 = {}

---@param PlayerController APlayerController
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2:CreateProxyObjectForInAppPurchaseUnprocessedPurchases(PlayerController) end
---@param PlayerController APlayerController
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2:CreateProxyObjectForInAppPurchaseQueryOwned(PlayerController) end
---@param PlayerController APlayerController
---@param ProductRequest FInAppPurchaseProductRequest2
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2:CreateProxyObjectForInAppPurchase(PlayerController, ProductRequest) end


---@class UInAppPurchaseQueryCallbackProxy2 : UObject
---@field OnSuccess FInAppPurchaseQueryCallbackProxy2OnSuccess
---@field OnFailure FInAppPurchaseQueryCallbackProxy2OnFailure
local UInAppPurchaseQueryCallbackProxy2 = {}

---@param PlayerController APlayerController
---@param ProductIdentifiers TArray<FString>
---@return UInAppPurchaseQueryCallbackProxy2
function UInAppPurchaseQueryCallbackProxy2:CreateProxyObjectForInAppPurchaseQuery(PlayerController, ProductIdentifiers) end


---@class UInAppPurchaseRestoreCallbackProxy2 : UObject
---@field OnSuccess FInAppPurchaseRestoreCallbackProxy2OnSuccess
---@field OnFailure FInAppPurchaseRestoreCallbackProxy2OnFailure
local UInAppPurchaseRestoreCallbackProxy2 = {}

---@param ConsumableProductFlags TArray<FInAppPurchaseProductRequest2>
---@param PlayerController APlayerController
---@return UInAppPurchaseRestoreCallbackProxy2
function UInAppPurchaseRestoreCallbackProxy2:CreateProxyObjectForInAppPurchaseRestore(ConsumableProductFlags, PlayerController) end


---@class UIpConnection : UNetConnection
---@field SocketErrorDisconnectDelay float
local UIpConnection = {}



---@class UIpNetDriver : UNetDriver
---@field LogPortUnreach boolean
---@field AllowPlayerPortUnreach boolean
---@field MaxPortCountToTry uint32
---@field ServerDesiredSocketReceiveBufferBytes uint32
---@field ServerDesiredSocketSendBufferBytes uint32
---@field ClientDesiredSocketReceiveBufferBytes uint32
---@field ClientDesiredSocketSendBufferBytes uint32
---@field MaxSecondsInReceive double
---@field NbPacketsBetweenReceiveTimeTest int32
---@field ResolutionConnectionTimeout float
local UIpNetDriver = {}



---@class UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FJoinSessionCallbackProxyOnSuccess
---@field OnFailure FJoinSessionCallbackProxyOnFailure
local UJoinSessionCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param SearchResult FBlueprintSessionResult
---@return UJoinSessionCallbackProxy
function UJoinSessionCallbackProxy:JoinSession(WorldContextObject, PlayerController, SearchResult) end


---@class ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
local ULeaderboardBlueprintLibrary = {}

---@param PlayerController APlayerController
---@param StatName FName
---@param StatValue int32
---@return boolean
function ULeaderboardBlueprintLibrary:WriteLeaderboardInteger(PlayerController, StatName, StatValue) end


---@class ULeaderboardFlushCallbackProxy : UObject
---@field OnSuccess FLeaderboardFlushCallbackProxyOnSuccess
---@field OnFailure FLeaderboardFlushCallbackProxyOnFailure
local ULeaderboardFlushCallbackProxy = {}

---@param PlayerController APlayerController
---@param SessionName FName
---@return ULeaderboardFlushCallbackProxy
function ULeaderboardFlushCallbackProxy:CreateProxyObjectForFlush(PlayerController, SessionName) end


---@class ULeaderboardQueryCallbackProxy : UObject
---@field OnSuccess FLeaderboardQueryCallbackProxyOnSuccess
---@field OnFailure FLeaderboardQueryCallbackProxyOnFailure
local ULeaderboardQueryCallbackProxy = {}

---@param PlayerController APlayerController
---@param StatName FName
---@return ULeaderboardQueryCallbackProxy
function ULeaderboardQueryCallbackProxy:CreateProxyObjectForIntQuery(PlayerController, StatName) end


---@class ULogoutCallbackProxy : UBlueprintAsyncActionBase
---@field OnSuccess FLogoutCallbackProxyOnSuccess
---@field OnFailure FLogoutCallbackProxyOnFailure
local ULogoutCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@return ULogoutCallbackProxy
function ULogoutCallbackProxy:Logout(WorldContextObject, PlayerController) end


---@class UOnlineEngineInterfaceImpl : UOnlineEngineInterface
---@field MappedUniqueNetIdTypes TMap<FName, FName>
---@field CompatibleUniqueNetIdTypes TArray<FName>
---@field VoiceSubsystemNameOverride FName
local UOnlineEngineInterfaceImpl = {}



---@class UOnlinePIESettings : UDeveloperSettings
---@field bOnlinePIEEnabled boolean
---@field Logins TArray<FPIELoginSettingsInternal>
local UOnlinePIESettings = {}



---@class UOnlineServicesEngineInterfaceImpl : UOnlineEngineInterface
local UOnlineServicesEngineInterfaceImpl = {}


---@class UOnlineSessionClient : UOnlineSession
---@field bIsFromInvite boolean
---@field bHandlingDisconnect boolean
local UOnlineSessionClient = {}



---@class UPartyBeaconState : UObject
---@field SessionName FName
---@field NumConsumedReservations int32
---@field MaxReservations int32
---@field NumTeams int32
---@field NumPlayersPerTeam int32
---@field TeamAssignmentMethod FName
---@field ReservedHostTeamNum int32
---@field ForceTeamNum int32
---@field bRestrictCrossConsole boolean
---@field PlatformCrossplayRestrictions TArray<FString>
---@field PlatformTypeMapping TArray<FPartyBeaconCrossplayPlatformMapping>
---@field bEnableRemovalRequests boolean
---@field Reservations TArray<FPartyReservation>
local UPartyBeaconState = {}



---@class UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FQuitMatchCallbackProxyOnSuccess
---@field OnFailure FQuitMatchCallbackProxyOnFailure
local UQuitMatchCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID FString
---@param Outcome EMPMatchOutcome::Type
---@param TurnTimeoutInSeconds int32
---@return UQuitMatchCallbackProxy
function UQuitMatchCallbackProxy:QuitMatch(WorldContextObject, PlayerController, MatchID, Outcome, TurnTimeoutInSeconds) end


---@class UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
---@field OnSuccess FShowLoginUICallbackProxyOnSuccess
---@field OnFailure FShowLoginUICallbackProxyOnFailure
local UShowLoginUICallbackProxy = {}

---@param WorldContextObject UObject
---@param InPlayerController APlayerController
---@return UShowLoginUICallbackProxy
function UShowLoginUICallbackProxy:ShowExternalLoginUI(WorldContextObject, InPlayerController) end


---@class USpectatorBeaconState : UObject
---@field SessionName FName
---@field NumConsumedReservations int32
---@field MaxReservations int32
---@field bRestrictCrossConsole boolean
---@field Reservations TArray<FSpectatorReservation>
local USpectatorBeaconState = {}



---@class UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
local UTurnBasedBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param Object UObject
function UTurnBasedBlueprintLibrary:RegisterTurnBasedMatchInterfaceObject(WorldContextObject, PlayerController, Object) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID FString
---@param PlayerIndex int32
---@param PlayerDisplayName FString
function UTurnBasedBlueprintLibrary:GetPlayerDisplayName(WorldContextObject, PlayerController, MatchID, PlayerIndex, PlayerDisplayName) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID FString
---@param PlayerIndex int32
function UTurnBasedBlueprintLibrary:GetMyPlayerIndex(WorldContextObject, PlayerController, MatchID, PlayerIndex) end
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID FString
---@param bIsMyTurn boolean
function UTurnBasedBlueprintLibrary:GetIsMyTurn(WorldContextObject, PlayerController, MatchID, bIsMyTurn) end


---@class UVoipListenerSynthComponent : USynthComponent
local UVoipListenerSynthComponent = {}

---@return boolean
function UVoipListenerSynthComponent:IsIdling() end


