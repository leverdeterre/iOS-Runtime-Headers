/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface VKPuckDrawStyle : VKRenderStyle {
}

@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  arrowColor; /* unknown property attribute:  1>=[4f]} */
@property(readonly) struct  arrowColorStale; /* unknown property attribute:  1>=[4f]} */
@property(readonly) float arrowBrightness;
@property(readonly) float circleBrightness;
@property(readonly) bool hasArrowBrightness;
@property(readonly) bool hasArrowColor;
@property(readonly) bool hasArrowColorStale;
@property(readonly) bool hasCircleBrightness;
@property(readonly) bool hasOffset;
@property(readonly) bool hasSize;
@property(readonly) float offset;
@property(readonly) float size;

+ (int)renderStyleID;

- (float)arrowBrightness;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColor;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColorStale;
- (float)circleBrightness;
- (bool)hasArrowBrightness;
- (bool)hasArrowColor;
- (bool)hasArrowColorStale;
- (bool)hasCircleBrightness;
- (bool)hasOffset;
- (bool)hasSize;
- (float)offset;
- (float)size;

@end
