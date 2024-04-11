---@meta

---@class FAnchors
---@field Minimum FVector2D
---@field Maximum FVector2D
FAnchors = {}



---@class FCustomizedToolMenu
---@field Name FName
---@field Entries TMap<FName, FCustomizedToolMenuEntry>
---@field Sections TMap<FName, FCustomizedToolMenuSection>
---@field EntryOrder TMap<FName, FCustomizedToolMenuNameArray>
---@field SectionOrder TArray<FName>
FCustomizedToolMenu = {}



---@class FCustomizedToolMenuEntry
---@field Visibility ECustomizedToolMenuVisibility
FCustomizedToolMenuEntry = {}



---@class FCustomizedToolMenuNameArray
---@field Names TArray<FName>
FCustomizedToolMenuNameArray = {}



---@class FCustomizedToolMenuSection
---@field Visibility ECustomizedToolMenuVisibility
FCustomizedToolMenuSection = {}



---@class FInputChord
---@field Key FKey
---@field bShift boolean
---@field bCtrl boolean
---@field bAlt boolean
---@field bCmd boolean
FInputChord = {}



---@class FVirtualKeyboardOptions
---@field bEnableAutocorrect boolean
FVirtualKeyboardOptions = {}



---@class UButtonWidgetStyle : USlateWidgetStyleContainerBase
---@field ButtonStyle FButtonStyle
UButtonWidgetStyle = {}



---@class UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field CheckBoxStyle FCheckBoxStyle
UCheckBoxWidgetStyle = {}



---@class UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field ComboBoxStyle FComboBoxStyle
UComboBoxWidgetStyle = {}



---@class UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
---@field ComboButtonStyle FComboButtonStyle
UComboButtonWidgetStyle = {}



---@class UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field EditableTextBoxStyle FEditableTextBoxStyle
UEditableTextBoxWidgetStyle = {}



---@class UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
---@field EditableTextStyle FEditableTextStyle
UEditableTextWidgetStyle = {}



---@class UProgressWidgetStyle : USlateWidgetStyleContainerBase
---@field ProgressBarStyle FProgressBarStyle
UProgressWidgetStyle = {}



---@class UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
---@field ScrollBarStyle FScrollBarStyle
UScrollBarWidgetStyle = {}



---@class UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field ScrollBoxStyle FScrollBoxStyle
UScrollBoxWidgetStyle = {}



---@class USlateSettings : UObject
---@field bExplicitCanvasChildZOrder boolean
USlateSettings = {}



---@class USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
---@field SpinBoxStyle FSpinBoxStyle
USpinBoxWidgetStyle = {}



---@class UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
---@field TextBlockStyle FTextBlockStyle
UTextBlockWidgetStyle = {}



---@class UToolMenuBase : UObject
UToolMenuBase = {}


