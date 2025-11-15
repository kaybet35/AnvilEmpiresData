---@meta

---@class FAnchors
---@field Minimum FVector2D
---@field Maximum FVector2D
local FAnchors = {}



---@class FCustomizedToolMenu
---@field Name FName
---@field Entries TMap<FName, FCustomizedToolMenuEntry>
---@field Sections TMap<FName, FCustomizedToolMenuSection>
---@field EntryOrder TMap<FName, FCustomizedToolMenuNameArray>
---@field SectionOrder TArray<FName>
local FCustomizedToolMenu = {}



---@class FCustomizedToolMenuEntry
---@field Visibility ECustomizedToolMenuVisibility
local FCustomizedToolMenuEntry = {}



---@class FCustomizedToolMenuNameArray
---@field Names TArray<FName>
local FCustomizedToolMenuNameArray = {}



---@class FCustomizedToolMenuSection
---@field Visibility ECustomizedToolMenuVisibility
local FCustomizedToolMenuSection = {}



---@class FInputChord
---@field Key FKey
---@field bShift boolean
---@field bCtrl boolean
---@field bAlt boolean
---@field bCmd boolean
local FInputChord = {}



---@class FVirtualKeyboardOptions
---@field bEnableAutocorrect boolean
local FVirtualKeyboardOptions = {}



---@class UButtonWidgetStyle : USlateWidgetStyleContainerBase
---@field ButtonStyle FButtonStyle
local UButtonWidgetStyle = {}



---@class UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field CheckBoxStyle FCheckBoxStyle
local UCheckBoxWidgetStyle = {}



---@class UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field ComboBoxStyle FComboBoxStyle
local UComboBoxWidgetStyle = {}



---@class UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
---@field ComboButtonStyle FComboButtonStyle
local UComboButtonWidgetStyle = {}



---@class UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field EditableTextBoxStyle FEditableTextBoxStyle
local UEditableTextBoxWidgetStyle = {}



---@class UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
---@field EditableTextStyle FEditableTextStyle
local UEditableTextWidgetStyle = {}



---@class UProgressWidgetStyle : USlateWidgetStyleContainerBase
---@field ProgressBarStyle FProgressBarStyle
local UProgressWidgetStyle = {}



---@class UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
---@field ScrollBarStyle FScrollBarStyle
local UScrollBarWidgetStyle = {}



---@class UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field ScrollBoxStyle FScrollBoxStyle
local UScrollBoxWidgetStyle = {}



---@class USlateSettings : UObject
---@field bExplicitCanvasChildZOrder boolean
local USlateSettings = {}



---@class USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field SpinBoxStyle FSpinBoxStyle
local USpinBoxWidgetStyle = {}



---@class UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
---@field TextBlockStyle FTextBlockStyle
local UTextBlockWidgetStyle = {}



---@class UToolMenuBase : UObject
local UToolMenuBase = {}


