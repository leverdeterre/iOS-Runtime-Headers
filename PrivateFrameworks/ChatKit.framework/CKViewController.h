/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKViewController : UIViewController {
    bool_appeared;
    bool_appearing;
    bool_dissapearing;
}

@property bool appeared;
@property bool appearing;
@property bool dissapearing;

- (bool)appeared;
- (bool)appearing;
- (void)childViewControllersPerform:(SEL)arg1;
- (bool)dissapearing;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)setAppeared:(bool)arg1;
- (void)setAppearing:(bool)arg1;
- (void)setDissapearing:(bool)arg1;
- (void)significantTimeChange;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
