/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel, UITextView, UIView;

@interface CKTranscriptRecipientsHeaderFooterView : UITableViewHeaderFooterView {
    UIView *_bottomSeparator;
    UILabel *_headerLabel;
    UITextView *_locationSharingTextView;
    double _margin;
    UILabel *_preceedingSectionFooterLabel;
    UIView *_topSeparator;
}

@property(retain) UIView * bottomSeparator;
@property(retain) UILabel * headerLabel;
@property(retain) UITextView * locationSharingTextView;
@property double margin;
@property(retain) UILabel * preceedingSectionFooterLabel;
@property(retain) UIView * topSeparator;

+ (id)identifier;

- (id)bottomSeparator;
- (void)dealloc;
- (id)headerLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)locationSharingTextView;
- (double)margin;
- (id)preceedingSectionFooterLabel;
- (void)setBottomSeparator:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setLocationSharingTextView:(id)arg1;
- (void)setMargin:(double)arg1;
- (void)setPreceedingSectionFooterLabel:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (id)topSeparator;

@end
