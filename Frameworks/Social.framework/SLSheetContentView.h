/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSMutableArray, NSMutableDictionary, SLSheetTextComposeView, UILabel, UITextView, UIView;

@interface SLSheetContentView : UIView {
    UIView *_accessoryView;
    UIView *_autoCompletionModeSeparator;
    double _autoCompletionTextViewHeight;
    UIView *_bottomSeparator;
    NSMutableArray *_constraints;
    long long _currentVerticalSizeClass;
    NSMutableDictionary *_intrinsicSizes;
    double _previewTopMargin;
    UIView *_previewView;
    SLSheetTextComposeView *_textComposeView;
    double _textViewTopMargin;
    bool_autoCompletionMode;
}

@property(retain) UIView * accessoryView;
@property(readonly) UILabel * placeholderLabel;
@property(retain) UIView * previewView;
@property(readonly) UITextView * textView;

- (void).cxx_destruct;
- (double)_previewMarginForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resetAccessoryView;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (double)_textTopMarginForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)accessoryView;
- (void)adjustComposeViewForPreview;
- (void)beginAutoCompletionMode;
- (void)endAutoCompletionMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)arg1;
- (id)previewView;
- (void)resetPreview;
- (void)setAccessoryView:(id)arg1;
- (void)setCurrentVerticalSizeClass:(long long)arg1;
- (void)setIntrinsicSize:(struct CGSize { double x1; double x2; })arg1 forVerticalSizeClass:(long long)arg2;
- (void)setPreviewView:(id)arg1;
- (id)textView;
- (void)updateConstraints;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;

@end
