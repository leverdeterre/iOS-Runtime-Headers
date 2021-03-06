/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKIdentityProtocol>, ABUnknownPersonViewController, NSString;

@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate> {
    <EKIdentityProtocol> *_identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end
