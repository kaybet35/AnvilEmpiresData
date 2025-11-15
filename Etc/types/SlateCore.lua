---@meta

---@class FAnalogInputEvent : FKeyEvent
local FAnalogInputEvent = {}


---@class FButtonStyle : FSlateWidgetStyle
---@field Normal FSlateBrush
---@field Hovered FSlateBrush
---@field Pressed FSlateBrush
---@field Disabled FSlateBrush
---@field NormalForeground FSlateColor
---@field HoveredForeground FSlateColor
---@field PressedForeground FSlateColor
---@field DisabledForeground FSlateColor
---@field NormalPadding FMargin
---@field PressedPadding FMargin
---@field PressedSlateSound FSlateSound
---@field HoveredSlateSound FSlateSound
local FButtonStyle = {}



---@class FCaptureLostEvent
local FCaptureLostEvent = {}


---@class FCharacterEvent : FInputEvent
local FCharacterEvent = {}


---@class FCheckBoxStyle : FSlateWidgetStyle
---@field CheckBoxType ESlateCheckBoxType::Type
---@field UncheckedImage FSlateBrush
---@field UncheckedHoveredImage FSlateBrush
---@field UncheckedPressedImage FSlateBrush
---@field CheckedImage FSlateBrush
---@field CheckedHoveredImage FSlateBrush
---@field CheckedPressedImage FSlateBrush
---@field UndeterminedImage FSlateBrush
---@field UndeterminedHoveredImage FSlateBrush
---@field UndeterminedPressedImage FSlateBrush
---@field Padding FMargin
---@field BackgroundImage FSlateBrush
---@field BackgroundHoveredImage FSlateBrush
---@field BackgroundPressedImage FSlateBrush
---@field ForegroundColor FSlateColor
---@field HoveredForeground FSlateColor
---@field PressedForeground FSlateColor
---@field CheckedForeground FSlateColor
---@field CheckedHoveredForeground FSlateColor
---@field CheckedPressedForeground FSlateColor
---@field UndeterminedForeground FSlateColor
---@field BorderBackgroundColor FSlateColor
---@field CheckedSlateSound FSlateSound
---@field UncheckedSlateSound FSlateSound
---@field HoveredSlateSound FSlateSound
local FCheckBoxStyle = {}



---@class FComboBoxStyle : FSlateWidgetStyle
---@field ComboButtonStyle FComboButtonStyle
---@field PressedSlateSound FSlateSound
---@field SelectionChangeSlateSound FSlateSound
---@field ContentPadding FMargin
---@field MenuRowPadding FMargin
local FComboBoxStyle = {}



---@class FComboButtonStyle : FSlateWidgetStyle
---@field ButtonStyle FButtonStyle
---@field DownArrowImage FSlateBrush
---@field ShadowOffset FVector2D
---@field ShadowColorAndOpacity FLinearColor
---@field MenuBorderBrush FSlateBrush
---@field MenuBorderPadding FMargin
---@field ContentPadding FMargin
---@field DownArrowPadding FMargin
---@field DownArrowAlign EVerticalAlignment
local FComboButtonStyle = {}



---@class FCompositeFallbackFont
---@field Typeface FTypeface
---@field ScalingFactor float
local FCompositeFallbackFont = {}



---@class FCompositeFont
---@field DefaultTypeface FTypeface
---@field FallbackTypeface FCompositeFallbackFont
---@field SubTypefaces TArray<FCompositeSubFont>
local FCompositeFont = {}



---@class FCompositeSubFont : FCompositeFallbackFont
---@field CharacterRanges TArray<FInt32Range>
---@field Cultures FString
local FCompositeSubFont = {}



---@class FDockTabStyle : FSlateWidgetStyle
---@field CloseButtonStyle FButtonStyle
---@field NormalBrush FSlateBrush
---@field ColorOverlayTabBrush FSlateBrush
---@field ColorOverlayIconBrush FSlateBrush
---@field ForegroundBrush FSlateBrush
---@field HoveredBrush FSlateBrush
---@field ContentAreaBrush FSlateBrush
---@field TabWellBrush FSlateBrush
---@field TabTextStyle FTextBlockStyle
---@field TabPadding FMargin
---@field IconSize FVector2D
---@field OverlapWidth float
---@field FlashColor FSlateColor
---@field NormalForegroundColor FSlateColor
---@field HoveredForegroundColor FSlateColor
---@field ActiveForegroundColor FSlateColor
---@field ForegroundForegroundColor FSlateColor
---@field IconBorderPadding float
local FDockTabStyle = {}



---@class FEditableTextBoxStyle : FSlateWidgetStyle
---@field BackgroundImageNormal FSlateBrush
---@field BackgroundImageHovered FSlateBrush
---@field BackgroundImageFocused FSlateBrush
---@field BackgroundImageReadOnly FSlateBrush
---@field Padding FMargin
---@field TextStyle FTextBlockStyle
---@field ForegroundColor FSlateColor
---@field BackgroundColor FSlateColor
---@field ReadOnlyForegroundColor FSlateColor
---@field FocusedForegroundColor FSlateColor
---@field HScrollBarPadding FMargin
---@field VScrollBarPadding FMargin
---@field ScrollBarStyle FScrollBarStyle
local FEditableTextBoxStyle = {}



---@class FEditableTextStyle : FSlateWidgetStyle
---@field Font FSlateFontInfo
---@field ColorAndOpacity FSlateColor
---@field BackgroundImageSelected FSlateBrush
---@field BackgroundImageComposing FSlateBrush
---@field CaretImage FSlateBrush
local FEditableTextStyle = {}



---@class FExpandableAreaStyle : FSlateWidgetStyle
---@field CollapsedImage FSlateBrush
---@field ExpandedImage FSlateBrush
---@field RolloutAnimationSeconds float
local FExpandableAreaStyle = {}



---@class FFocusEvent
local FFocusEvent = {}


---@class FFontData
---@field FontFilename FString
---@field Hinting EFontHinting
---@field LoadingPolicy EFontLoadingPolicy
---@field SubFaceIndex int32
---@field FontFaceAsset UObject
local FFontData = {}



---@class FFontOutlineSettings
---@field OutlineSize int32
---@field bSeparateFillAlpha boolean
---@field bApplyOutlineToDropShadows boolean
---@field OutlineMaterial UObject
---@field OutlineColor FLinearColor
local FFontOutlineSettings = {}



---@class FGeometry
local FGeometry = {}


---@class FHeaderRowStyle : FSlateWidgetStyle
---@field ColumnStyle FTableColumnHeaderStyle
---@field LastColumnStyle FTableColumnHeaderStyle
---@field ColumnSplitterStyle FSplitterStyle
---@field SplitterHandleSize float
---@field BackgroundBrush FSlateBrush
---@field ForegroundColor FSlateColor
---@field HorizontalSeparatorBrush FSlateBrush
---@field HorizontalSeparatorThickness float
local FHeaderRowStyle = {}



---@class FHyperlinkStyle : FSlateWidgetStyle
---@field UnderlineStyle FButtonStyle
---@field TextStyle FTextBlockStyle
---@field Padding FMargin
local FHyperlinkStyle = {}



---@class FInlineEditableTextBlockStyle : FSlateWidgetStyle
---@field EditableTextBoxStyle FEditableTextBoxStyle
---@field TextStyle FTextBlockStyle
local FInlineEditableTextBlockStyle = {}



---@class FInlineTextImageStyle : FSlateWidgetStyle
---@field Image FSlateBrush
---@field Baseline int16
local FInlineTextImageStyle = {}



---@class FInputEvent
local FInputEvent = {}


---@class FKeyEvent : FInputEvent
local FKeyEvent = {}


---@class FMargin
---@field Left float
---@field Top float
---@field Right float
---@field Bottom float
local FMargin = {}



---@class FMotionEvent : FInputEvent
local FMotionEvent = {}


---@class FNavigationEvent : FInputEvent
local FNavigationEvent = {}


---@class FPointerEvent : FInputEvent
local FPointerEvent = {}


---@class FProgressBarStyle : FSlateWidgetStyle
---@field BackgroundImage FSlateBrush
---@field FillImage FSlateBrush
---@field MarqueeImage FSlateBrush
---@field EnableFillAnimation boolean
local FProgressBarStyle = {}



---@class FScrollBarStyle : FSlateWidgetStyle
---@field HorizontalBackgroundImage FSlateBrush
---@field VerticalBackgroundImage FSlateBrush
---@field VerticalTopSlotImage FSlateBrush
---@field HorizontalTopSlotImage FSlateBrush
---@field VerticalBottomSlotImage FSlateBrush
---@field HorizontalBottomSlotImage FSlateBrush
---@field NormalThumbImage FSlateBrush
---@field HoveredThumbImage FSlateBrush
---@field DraggedThumbImage FSlateBrush
---@field Thickness float
local FScrollBarStyle = {}



---@class FScrollBorderStyle : FSlateWidgetStyle
---@field TopShadowBrush FSlateBrush
---@field BottomShadowBrush FSlateBrush
local FScrollBorderStyle = {}



---@class FScrollBoxStyle : FSlateWidgetStyle
---@field BarThickness float
---@field TopShadowBrush FSlateBrush
---@field BottomShadowBrush FSlateBrush
---@field LeftShadowBrush FSlateBrush
---@field RightShadowBrush FSlateBrush
local FScrollBoxStyle = {}



---@class FSearchBoxStyle : FSlateWidgetStyle
---@field TextBoxStyle FEditableTextBoxStyle
---@field ActiveFontInfo FSlateFontInfo
---@field UpArrowImage FSlateBrush
---@field DownArrowImage FSlateBrush
---@field GlassImage FSlateBrush
---@field ClearImage FSlateBrush
---@field ImagePadding FMargin
---@field bLeftAlignButtons boolean
---@field bLeftAlignSearchResultButtons boolean
---@field bLeftAlignGlassImageAndClearButton boolean
local FSearchBoxStyle = {}



---@class FSegmentedControlStyle : FSlateWidgetStyle
---@field ControlStyle FCheckBoxStyle
---@field FirstControlStyle FCheckBoxStyle
---@field LastControlStyle FCheckBoxStyle
---@field BackgroundBrush FSlateBrush
---@field UniformPadding FMargin
local FSegmentedControlStyle = {}



---@class FSlateBrush
---@field bIsDynamicallyLoaded boolean
---@field bHasUObject boolean
---@field DrawAs ESlateBrushDrawType::Type
---@field Tiling ESlateBrushTileType::Type
---@field Mirroring ESlateBrushMirrorType::Type
---@field ImageType ESlateBrushImageType::Type
---@field ImageSize FVector2D
---@field Margin FMargin
---@field TintColor FSlateColor
---@field OutlineSettings FSlateBrushOutlineSettings
---@field ResourceObject UObject
---@field ResourceName FName
---@field UVRegion FBox2f
local FSlateBrush = {}



---@class FSlateBrushOutlineSettings
---@field CornerRadii FVector4
---@field Color FSlateColor
---@field Width float
---@field RoundingType ESlateBrushRoundingType::Type
---@field bUseBrushTransparency boolean
local FSlateBrushOutlineSettings = {}



---@class FSlateColor
---@field SpecifiedColor FLinearColor
---@field ColorUseRule ESlateColorStylingMode
local FSlateColor = {}



---@class FSlateFontInfo
---@field FontObject UObject
---@field FontMaterial UObject
---@field OutlineSettings FFontOutlineSettings
---@field TypefaceFontName FName
---@field Size int32
---@field LetterSpacing int32
---@field SkewAmount float
local FSlateFontInfo = {}



---@class FSlateSound
---@field ResourceObject UObject
local FSlateSound = {}



---@class FSlateWidgetStyle
local FSlateWidgetStyle = {}


---@class FSliderStyle : FSlateWidgetStyle
---@field NormalBarImage FSlateBrush
---@field HoveredBarImage FSlateBrush
---@field DisabledBarImage FSlateBrush
---@field NormalThumbImage FSlateBrush
---@field HoveredThumbImage FSlateBrush
---@field DisabledThumbImage FSlateBrush
---@field BarThickness float
local FSliderStyle = {}



---@class FSpinBoxStyle : FSlateWidgetStyle
---@field BackgroundBrush FSlateBrush
---@field ActiveBackgroundBrush FSlateBrush
---@field HoveredBackgroundBrush FSlateBrush
---@field ActiveFillBrush FSlateBrush
---@field HoveredFillBrush FSlateBrush
---@field InactiveFillBrush FSlateBrush
---@field ArrowsImage FSlateBrush
---@field ForegroundColor FSlateColor
---@field TextPadding FMargin
---@field InsetPadding FMargin
local FSpinBoxStyle = {}



---@class FSplitterStyle : FSlateWidgetStyle
---@field HandleNormalBrush FSlateBrush
---@field HandleHighlightBrush FSlateBrush
local FSplitterStyle = {}



---@class FStyleColorList
---@field StyleColors FLinearColor
local FStyleColorList = {}



---@class FStyleTheme
local FStyleTheme = {}


---@class FTableColumnHeaderStyle : FSlateWidgetStyle
---@field SortPrimaryAscendingImage FSlateBrush
---@field SortPrimaryDescendingImage FSlateBrush
---@field SortSecondaryAscendingImage FSlateBrush
---@field SortSecondaryDescendingImage FSlateBrush
---@field NormalBrush FSlateBrush
---@field HoveredBrush FSlateBrush
---@field MenuDropdownImage FSlateBrush
---@field MenuDropdownNormalBorderBrush FSlateBrush
---@field MenuDropdownHoveredBorderBrush FSlateBrush
local FTableColumnHeaderStyle = {}



---@class FTableRowStyle : FSlateWidgetStyle
---@field SelectorFocusedBrush FSlateBrush
---@field ActiveHoveredBrush FSlateBrush
---@field ActiveBrush FSlateBrush
---@field InactiveHoveredBrush FSlateBrush
---@field InactiveBrush FSlateBrush
---@field bUseParentRowBrush boolean
---@field ParentRowBackgroundBrush FSlateBrush
---@field ParentRowBackgroundHoveredBrush FSlateBrush
---@field EvenRowBackgroundHoveredBrush FSlateBrush
---@field EvenRowBackgroundBrush FSlateBrush
---@field OddRowBackgroundHoveredBrush FSlateBrush
---@field OddRowBackgroundBrush FSlateBrush
---@field TextColor FSlateColor
---@field SelectedTextColor FSlateColor
---@field DropIndicator_Above FSlateBrush
---@field DropIndicator_Onto FSlateBrush
---@field DropIndicator_Below FSlateBrush
---@field ActiveHighlightedBrush FSlateBrush
---@field InactiveHighlightedBrush FSlateBrush
local FTableRowStyle = {}



---@class FTableViewStyle : FSlateWidgetStyle
---@field BackgroundBrush FSlateBrush
local FTableViewStyle = {}



---@class FTextBlockStyle : FSlateWidgetStyle
---@field Font FSlateFontInfo
---@field ColorAndOpacity FSlateColor
---@field ShadowOffset FVector2D
---@field ShadowColorAndOpacity FLinearColor
---@field SelectedBackgroundColor FSlateColor
---@field HighlightColor FSlateColor
---@field HighlightShape FSlateBrush
---@field StrikeBrush FSlateBrush
---@field UnderlineBrush FSlateBrush
---@field TransformPolicy ETextTransformPolicy
---@field OverflowPolicy ETextOverflowPolicy
local FTextBlockStyle = {}



---@class FToolBarStyle : FSlateWidgetStyle
---@field BackgroundBrush FSlateBrush
---@field ExpandBrush FSlateBrush
---@field SeparatorBrush FSlateBrush
---@field LabelStyle FTextBlockStyle
---@field EditableTextStyle FEditableTextBoxStyle
---@field ToggleButton FCheckBoxStyle
---@field ComboButtonStyle FComboButtonStyle
---@field SettingsButtonStyle FButtonStyle
---@field SettingsComboButton FComboButtonStyle
---@field SettingsToggleButton FCheckBoxStyle
---@field ButtonStyle FButtonStyle
---@field LabelPadding FMargin
---@field SeparatorPadding FMargin
---@field ComboButtonPadding FMargin
---@field ButtonPadding FMargin
---@field CheckBoxPadding FMargin
---@field BlockPadding FMargin
---@field IndentedBlockPadding FMargin
---@field BackgroundPadding FMargin
---@field IconSize FVector2D
---@field bShowLabels boolean
local FToolBarStyle = {}



---@class FTypeface
---@field Fonts TArray<FTypefaceEntry>
local FTypeface = {}



---@class FTypefaceEntry
---@field Name FName
---@field Font FFontData
local FTypefaceEntry = {}



---@class FVolumeControlStyle : FSlateWidgetStyle
---@field SliderStyle FSliderStyle
---@field HighVolumeImage FSlateBrush
---@field MidVolumeImage FSlateBrush
---@field LowVolumeImage FSlateBrush
---@field NoVolumeImage FSlateBrush
---@field MutedImage FSlateBrush
local FVolumeControlStyle = {}



---@class FWindowStyle : FSlateWidgetStyle
---@field MinimizeButtonStyle FButtonStyle
---@field MaximizeButtonStyle FButtonStyle
---@field RestoreButtonStyle FButtonStyle
---@field CloseButtonStyle FButtonStyle
---@field TitleTextStyle FTextBlockStyle
---@field ActiveTitleBrush FSlateBrush
---@field InactiveTitleBrush FSlateBrush
---@field FlashTitleBrush FSlateBrush
---@field BackgroundColor FSlateColor
---@field OutlineBrush FSlateBrush
---@field OutlineColor FSlateColor
---@field BorderBrush FSlateBrush
---@field BorderColor FSlateColor
---@field BackgroundBrush FSlateBrush
---@field ChildBackgroundBrush FSlateBrush
---@field WindowCornerRadius int32
---@field BorderPadding FMargin
local FWindowStyle = {}



---@class IFontFaceInterface : IInterface
local IFontFaceInterface = {}


---@class IFontProviderInterface : IInterface
local IFontProviderInterface = {}


---@class ISlateWidgetStyleContainerInterface : IInterface
local ISlateWidgetStyleContainerInterface = {}


---@class UFontBulkData : UObject
local UFontBulkData = {}


---@class USlateThemeManager : UObject
---@field CurrentThemeId FGuid
---@field ActiveColors FStyleColorList
local USlateThemeManager = {}



---@class USlateTypes : UObject
local USlateTypes = {}


---@class USlateWidgetStyleAsset : UObject
---@field CustomStyle USlateWidgetStyleContainerBase
local USlateWidgetStyleAsset = {}



---@class USlateWidgetStyleContainerBase : UObject
local USlateWidgetStyleContainerBase = {}


