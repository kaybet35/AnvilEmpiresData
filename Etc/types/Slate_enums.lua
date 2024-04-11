---@enum ECustomizedToolMenuVisibility
ECustomizedToolMenuVisibility = {
    None = 0,
    Visible = 1,
    Hidden = 2,
    ECustomizedToolMenuVisibility_MAX = 3,
}

---@enum EDescendantScrollDestination
EDescendantScrollDestination = {
    IntoView = 0,
    TopOrLeft = 1,
    Center = 2,
    BottomOrRight = 3,
    EDescendantScrollDestination_MAX = 4,
}

---@enum EListItemAlignment
EListItemAlignment = {
    EvenlyDistributed = 0,
    EvenlySize = 1,
    EvenlyWide = 2,
    LeftAligned = 3,
    RightAligned = 4,
    CenterAligned = 5,
    Fill = 6,
    EListItemAlignment_MAX = 7,
}

---@enum EMultiBlockType
EMultiBlockType = {
    None = 0,
    ButtonRow = 1,
    EditableText = 2,
    Heading = 3,
    MenuEntry = 4,
    Separator = 5,
    ToolBarButton = 6,
    ToolBarComboButton = 7,
    Widget = 8,
    EMultiBlockType_MAX = 9,
}

---@enum EMultiBoxType
EMultiBoxType = {
    MenuBar = 0,
    ToolBar = 1,
    VerticalToolBar = 2,
    SlimHorizontalToolBar = 3,
    UniformToolBar = 4,
    Menu = 5,
    ButtonRow = 6,
    EMultiBoxType_MAX = 7,
}

---@enum EMultipleKeyBindingIndex
EMultipleKeyBindingIndex = {
    Primary = 0,
    Secondary = 1,
    NumChords = 2,
    EMultipleKeyBindingIndex_MAX = 3,
}

---@enum EProgressBarFillStyle
EProgressBarFillStyle = {
    Mask = 0,
    Scale = 1,
    EProgressBarFillStyle_MAX = 2,
}

---@enum EProgressBarFillType
EProgressBarFillType = {
    LeftToRight = 0,
    RightToLeft = 1,
    FillFromCenter = 2,
    FillFromCenterHorizontal = 3,
    FillFromCenterVertical = 4,
    TopToBottom = 5,
    BottomToTop = 6,
    EProgressBarFillType_MAX = 7,
}

---@enum EScrollWhenFocusChanges
EScrollWhenFocusChanges = {
    NoScroll = 0,
    InstantScroll = 1,
    AnimatedScroll = 2,
    EScrollWhenFocusChanges_MAX = 3,
}

---@enum ESelectionMode
ESelectionMode = {
    None = 0,
    Single = 1,
    SingleToggle = 2,
    Multi = 3,
    ESelectionMode_MAX = 4,
}

---@enum EStretch
EStretch = {
    None = 0,
    Fill = 1,
    ScaleToFit = 2,
    ScaleToFitX = 3,
    ScaleToFitY = 4,
    ScaleToFill = 5,
    ScaleBySafeZone = 6,
    UserSpecified = 7,
    UserSpecifiedWithClipping = 8,
    EStretch_MAX = 9,
}

---@enum EStretchDirection
EStretchDirection = {
    Both = 0,
    DownOnly = 1,
    UpOnly = 2,
    EStretchDirection_MAX = 3,
}

---@enum ETableViewMode
ETableViewMode = {
    List = 0,
    Tile = 1,
    Tree = 2,
    ETableViewMode_MAX = 3,
}

---@enum ETextFlowDirection
ETextFlowDirection = {
    Auto = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ETextFlowDirection_MAX = 3,
}

---@enum ETextJustify
ETextJustify = {
    Left = 0,
    Center = 1,
    Right = 2,
    ETextJustify_MAX = 3,
}

---@enum ETextWrappingPolicy
ETextWrappingPolicy = {
    DefaultWrapping = 0,
    AllowPerCharacterWrapping = 1,
    ETextWrappingPolicy_MAX = 2,
}

---@enum EUserInterfaceActionType
EUserInterfaceActionType = {
    None = 0,
    Button = 1,
    ToggleButton = 2,
    RadioButton = 3,
    Check = 4,
    CollapsedButton = 5,
    EUserInterfaceActionType_MAX = 6,
}

---@enum EVirtualKeyboardDismissAction
EVirtualKeyboardDismissAction = {
    TextChangeOnDismiss = 0,
    TextCommitOnAccept = 1,
    TextCommitOnDismiss = 2,
    EVirtualKeyboardDismissAction_MAX = 3,
}

---@enum EVirtualKeyboardTrigger
EVirtualKeyboardTrigger = {
    OnFocusByPointer = 0,
    OnAllFocusEvents = 1,
    EVirtualKeyboardTrigger_MAX = 2,
}

