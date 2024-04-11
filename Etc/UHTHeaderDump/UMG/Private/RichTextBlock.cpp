#include "RichTextBlock.h"
#include "ESlateVisibility.h"
#include "Templates/SubclassOf.h"

URichTextBlock::URichTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->TextStyleSet = NULL;
    this->bOverrideDefaultStyle = false;
    this->MinDesiredWidth = 0.00f;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->TextOverflowPolicy = ETextOverflowPolicy::Clip;
}

void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
}

void URichTextBlock::SetTextStyleSet(UDataTable* NewTextStyleSet) {
}

void URichTextBlock::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy) {
}

void URichTextBlock::SetText(const FText& InText) {
}

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void URichTextBlock::SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle) {
}

void URichTextBlock::SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush) {
}

void URichTextBlock::SetDefaultShadowOffset(FVector2D InShadowOffset) {
}

void URichTextBlock::SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void URichTextBlock::SetDefaultMaterial(UMaterialInterface* InMaterial) {
}

void URichTextBlock::SetDefaultFont(FSlateFontInfo InFontInfo) {
}

void URichTextBlock::SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void URichTextBlock::SetDecorators(const TArray<TSubclassOf<URichTextBlockDecorator>>& InDecoratorClasses) {
}

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

void URichTextBlock::RefreshTextLayout() {
}

UDataTable* URichTextBlock::GetTextStyleSet() const {
    return NULL;
}

FText URichTextBlock::GetText() const {
    return FText::GetEmpty();
}

UMaterialInstanceDynamic* URichTextBlock::GetDefaultDynamicMaterial() {
    return NULL;
}

URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass) {
    return NULL;
}

void URichTextBlock::ClearAllDefaultStyleOverrides() {
}


