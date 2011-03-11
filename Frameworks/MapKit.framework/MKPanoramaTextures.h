/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStreetViewTileDecoder, MKPanorama, MKPanoramaRequest;

@interface MKPanoramaTextures : NSObject <MKStreetViewTileDecoderDelegate> {
    MKPanorama *panorama;
    MKStreetViewTileDecoder *decoder;
    unsigned int maxLevel;
    unsigned int maxImageLevel;
    float wrapX;
    float clampY;
    double renderYaw;
    double renderPitch;
    unsigned int renderLevel;
    unsigned int *tileLevelPresentMask;
    BOOL **tileInWorkingSet;
    unsigned int **tileTextures;
    MKPanoramaRequest ***tileRequests;
    double **tileBirths;
    BOOL fadeLevel0;
    BOOL pendingFade;
    BOOL multitexturing;
}

@property BOOL fadeLevel0;


- (void)dealloc;
- (struct { int x1; int x2; int x3; int x4; })_viewRectForYaw:(double)arg1 pitch:(double)arg2 level:(unsigned int)arg3;
- (void)_setTexture:(unsigned int)arg1 forTilePath:(int)arg2;
- (void)_setTilePath:(int)arg1 inWorkingSet:(BOOL)arg2 decodeArray:(id)arg3;
- (void)_enqueueDecodeRequest:(id)arg1;
- (void)_handleCompletedDecodeRequest:(id)arg1;
- (void)_bindAndScaleTexture:(unsigned int)arg1 x:(unsigned int)arg2 y:(unsigned int)arg3 level:(unsigned int)arg4;
- (void)_bindAndScaleWrapTexture:(unsigned int)arg1 x:(unsigned int)arg2 y:(unsigned int)arg3 level:(unsigned int)arg4;
- (void)emitVertexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withTexture:(struct { BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; }*)arg2 fadeTexture:(struct { BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; }*)arg3;
- (BOOL)baseLevelIsBirthing;
- (float)baseLevelFade;
- (unsigned int)baseLevelTextureName;
- (void)addTextureExtension:(id)arg1;
- (void)setFadeLevel0:(BOOL)arg1;
- (BOOL)fadeLevel0;
- (void)drawTilesWithTileStarts:(const int*)arg1 tileEnds:(const int*)arg2;
- (void)didPerformDecodeRequest:(id)arg1;
- (void)updateWorkingSetTilesForYaw:(double)arg1 pitch:(double)arg2 zoom:(float)arg3 addNewTiles:(BOOL)arg4;
- (id)initWithPanorama:(id)arg1 decoder:(id)arg2 numLevels:(unsigned int)arg3 wrapX:(float)arg4 clampY:(float)arg5 numImageLevels:(unsigned int)arg6 loadPreview:(BOOL)arg7;
- (void)didLoadImageData:(id)arg1 forTilePath:(int)arg2;
- (BOOL)hasBaseLevel;
- (BOOL)pendingFade;

@end