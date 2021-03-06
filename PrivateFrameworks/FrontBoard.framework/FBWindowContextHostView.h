/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBWindowContextHostViewDelegate>, FBLayerHostContainer, FBScene, FBWindowContextHostViewContentLayerDelegate, FBWindowContextManager, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, UIScreen;

@interface FBWindowContextHostView : UIView <FBWindowContextManagerObserver, FBSceneBoundsDelegate> {
    FBLayerHostContainer *_contentLayer;
    FBWindowContextHostViewContentLayerDelegate *_contentLayerDelegate;
    FBWindowContextManager *_contextManager;
    NSMutableOrderedSet *_contexts;
    <FBWindowContextHostViewDelegate> *_delegate;
    NSMutableSet *_hiddenContexts;
    NSMutableArray *_layerHosts;
    FBScene *_scene;
    UIScreen *_screen;
    bool_counteractUIScreenJail;
}

@property(retain) FBWindowContextManager * contextManager;
@property(copy,readonly) NSString * debugDescription;
@property <FBWindowContextHostViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSSet * hiddenContexts;
@property(retain,readonly) FBScene * scene;
@property(readonly) Class superclass;

- (void)_adjustLayerFrameAndTransform:(id)arg1;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_noteHostingStatusChanged;
- (id)contextManager;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)hasContent;
- (id)hiddenContexts;
- (id)init;
- (id)initWithScene:(id)arg1;
- (bool)isHosting;
- (id)scene;
- (void)sceneDidChangeBounds:(id)arg1;
- (void)setContextManager:(id)arg1;
- (void)setDebug:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHiddenContexts:(id)arg1;
- (id)window;
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;

@end
