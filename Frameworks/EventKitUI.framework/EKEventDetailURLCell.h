/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UITextView;

@interface EKEventDetailURLCell : EKEventDetailCell {
    UILabel *_URLTitleView;
    UITextView *_URLView;
}

- (void).cxx_destruct;
- (id)_URLTitleView;
- (id)_URLView;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)setURL:(id)arg1;
- (bool)update;

@end
