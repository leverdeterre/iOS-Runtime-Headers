/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKeyboardCandidatePageControl;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {
    UIKeyboardCandidatePageControl *_pageControl;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (double)defaultExtendedControlHeight;

- (double)_additionalClipHeight;
- (int)_clipCornersOfView:(id)arg1;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (void)candidateBarDidScroll:(id)arg1;
- (void)dealloc;
- (void)didEndSplitTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)rightButtonYOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCandidateViewExtended:(bool)arg1;
- (void)updatePageControlStatus;

@end
