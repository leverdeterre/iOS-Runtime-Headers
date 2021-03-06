/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboard, UIKeyboardInputMode, UIViewController;

@interface UICompatibilityInputViewController : UIInputViewController {
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    UIViewController *_inputController;
    UIKeyboardInputMode *_inputMode;
    bool_shouldRegenerateSizingConstraints;
}

@property(retain) UIViewController * inputController;

+ (bool)_requiresProxyInterface;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;

- (id)_compatView;
- (id)_compatibilityController;
- (id)_initAsDeferredController;
- (id)_keyboard;
- (id)childCompatibilityController;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishSplitTransition:(bool)arg1;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)inputController;
- (void)loadView;
- (void)rebuildChildConstraints;
- (void)setInputController:(id)arg1;
- (void)setInputMode:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (void)tearDownInputController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
