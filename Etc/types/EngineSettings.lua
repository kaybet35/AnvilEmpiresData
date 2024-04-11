---@meta

---@class FAutoCompleteCommand
---@field Command FString
---@field Desc FString
FAutoCompleteCommand = {}



---@class FGameModeName
---@field Name FString
---@field GameMode FSoftClassPath
FGameModeName = {}



---@class FTemplateMapInfoOverride
---@field Thumbnail FSoftObjectPath
---@field Map FSoftObjectPath
---@field DisplayName FText
FTemplateMapInfoOverride = {}



---@class UConsoleSettings : UObject
---@field MaxScrollbackSize int32
---@field ManualAutoCompleteList TArray<FAutoCompleteCommand>
---@field AutoCompleteMapPaths TArray<FString>
---@field BackgroundOpacityPercentage float
---@field bOrderTopToBottom boolean
---@field bDisplayHelpInAutoComplete boolean
---@field InputColor FColor
---@field HistoryColor FColor
---@field AutoCompleteCommandColor FColor
---@field AutoCompleteCVarColor FColor
---@field AutoCompleteFadedColor FColor
UConsoleSettings = {}



---@class UGameMapsSettings : UObject
---@field LocalMapOptions FString
---@field TransitionMap FSoftObjectPath
---@field bUseSplitscreen boolean
---@field TwoPlayerSplitscreenLayout ETwoPlayerSplitScreenType::Type
---@field ThreePlayerSplitscreenLayout EThreePlayerSplitScreenType::Type
---@field FourPlayerSplitscreenLayout EFourPlayerSplitScreenType
---@field bOffsetPlayerGamepadIds boolean
---@field GameInstanceClass FSoftClassPath
---@field GameDefaultMap FSoftObjectPath
---@field ServerDefaultMap FSoftObjectPath
---@field GlobalDefaultGameMode FSoftClassPath
---@field GlobalDefaultServerGameMode FSoftClassPath
---@field GameModeMapPrefixes TArray<FGameModeName>
---@field GameModeClassAliases TArray<FGameModeName>
UGameMapsSettings = {}

---@param bSkipFirstPlayer boolean
function UGameMapsSettings:SetSkipAssigningGamepadToPlayer1(bSkipFirstPlayer) end
---@return boolean
function UGameMapsSettings:GetSkipAssigningGamepadToPlayer1() end
---@return UGameMapsSettings
function UGameMapsSettings:GetGameMapsSettings() end


---@class UGameNetworkManagerSettings : UObject
---@field MinDynamicBandwidth int32
---@field MaxDynamicBandwidth int32
---@field TotalNetBandwidth int32
---@field BadPingThreshold int32
---@field bIsStandbyCheckingEnabled boolean
---@field StandbyRxCheatTime float
---@field StandbyTxCheatTime float
---@field PercentMissingForRxStandby float
---@field PercentMissingForTxStandby float
---@field PercentForBadPing float
---@field JoinInProgressStandbyWaitTime float
UGameNetworkManagerSettings = {}



---@class UGameSessionSettings : UObject
---@field MaxSpectators int32
---@field MaxPlayers int32
---@field bRequiresPushToTalk boolean
UGameSessionSettings = {}



---@class UGeneralEngineSettings : UObject
UGeneralEngineSettings = {}


---@class UGeneralProjectSettings : UObject
---@field CompanyName FString
---@field CompanyDistinguishedName FString
---@field CopyrightNotice FString
---@field Description FString
---@field Homepage FString
---@field LicensingTerms FString
---@field PrivacyPolicy FString
---@field ProjectID FGuid
---@field ProjectName FString
---@field ProjectVersion FString
---@field SupportContact FString
---@field ProjectDisplayedTitle FText
---@field ProjectDebugTitleInfo FText
---@field bShouldWindowPreserveAspectRatio boolean
---@field bUseBorderlessWindow boolean
---@field bStartInVR boolean
---@field bAllowWindowResize boolean
---@field bAllowClose boolean
---@field bAllowMaximize boolean
---@field bAllowMinimize boolean
---@field EyeOffsetForFakeStereoRenderingDevice float
---@field FOVForFakeStereoRenderingDevice float
UGeneralProjectSettings = {}



---@class UHudSettings : UObject
---@field bShowHUD boolean
---@field DebugDisplay TArray<FName>
UHudSettings = {}



