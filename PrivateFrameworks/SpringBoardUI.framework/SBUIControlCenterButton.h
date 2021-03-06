/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIControlCenterButtonDelegate>, NSString, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    UIVisualEffectView *_backgroundEffectView;
    UIImageView *_backgroundImageView;
    } _bgCapInsets;
    <SBUIControlCenterButtonDelegate> *_delegate;
    UIVisualEffect *_disabledStateEffect;
    UIImageView *_glyphImageView;
    UIVisualEffect *_highlightedStateEffect;
    double _naturalHeight;
    UIImage *_normalBGImage;
    UIImage *_normalGlyphImage;
    UIVisualEffect *_normalStateEffect;
    UIImage *_selectedBGImage;
    UIImage *_selectedGlyphImage;
    UIImage *_sourceGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    bool_isCircleButton;
    bool_isRectButton;
}

@property(copy,readonly) NSString * debugDescription;
@property <SBUIControlCenterButtonDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isCircleButton;
@property bool isRectButton;
@property double naturalHeight;
@property(retain) UIImage * normalBGImage;
@property(retain) UIImage * normalGlyphImage;
@property(retain) UIImage * selectedBGImage;
@property(retain) UIImage * selectedGlyphImage;
@property(retain) UIImage * sourceGlyphImage;
@property(retain) UIImage * sourceSelectedGlyphImage;
@property(readonly) Class superclass;

+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;
+ (id)_circleBackgroundImageForState:(long long)arg1;
+ (id)_roundRectBackgroundImageForState:(long long)arg1;
+ (id)circularButton;
+ (id)circularButtonWithGlyphImage:(id)arg1;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (id)roundRectButton;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })visibleContentInsets;

- (id)_backgroundImageWithGlyphImage:(id)arg1 state:(long long)arg2;
- (long long)_currentState;
- (bool)_drawingAsSelected;
- (id)_glyphImageForState:(long long)arg1;
- (void)_pressAction;
- (void)_rebuildGlyphImages;
- (void)_rebuildNormalGlyph;
- (void)_rebuildSelectedGlyph;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForGlyph:(id)arg1 centeredInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(double)arg3;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackgroundForStateChange;
- (void)_updateEffects;
- (void)_updateForStateChange;
- (void)_updateGlyphForStateChange;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(double)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircleButton;
- (bool)isRectButton;
- (double)naturalHeight;
- (id)normalBGImage;
- (id)normalGlyphImage;
- (id)selectedBGImage;
- (id)selectedGlyphImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setIsCircleButton:(bool)arg1;
- (void)setIsRectButton:(bool)arg1;
- (void)setNaturalHeight:(double)arg1;
- (void)setNormalBGImage:(id)arg1;
- (void)setNormalGlyphImage:(id)arg1;
- (void)setSelectedBGImage:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)setSourceGlyphImage:(id)arg1;
- (void)setSourceSelectedGlyphImage:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceGlyphImage;
- (id)sourceSelectedGlyphImage;
- (struct CGSize { double x1; double x2; })visibleContentSize;

@end
