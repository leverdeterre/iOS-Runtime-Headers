/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLDataBuffer, TSDGLDataBufferAttribute, TSDGLShader;

@interface KNWipeDataBuffer : NSObject {
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    double mBlurFraction;
    unsigned long long mDirection;
    } mMVPMatrix;
    TSDGLDataBuffer *mSolidDataBuffer;
    TSDGLDataBufferAttribute *mSolidPositionAttribute;
    TSDGLShader *mSolidShader;
    TSDGLDataBufferAttribute *mSolidTexCoordAttribute;
    } mTextureRect;
    } mVertexRect;
    TSDGLDataBuffer *mWipeDataBuffer;
    TSDGLDataBufferAttribute *mWipeOpacityAttribute;
    TSDGLDataBufferAttribute *mWipePositionAttribute;
    TSDGLShader *mWipeShader;
    TSDGLDataBufferAttribute *mWipeTexCoordAttribute;
}

@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } MVPMatrix;
@property double blurFraction;
@property unsigned long long direction;

- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })MVPMatrix;
- (double)blurFraction;
- (void)dealloc;
- (unsigned long long)direction;
- (void)drawWipeWithPercent:(double)arg1 opacity:(double)arg2;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { float x1; float x2; })p_texCoordFromX:(double)arg1 y:(double)arg2;
- (void)p_updateVertexInBuffer:(id)arg1 atIndex:(unsigned long long)arg2 x:(double)arg3 y:(double)arg4 opacity:(double)arg5;
- (void)setBlurFraction:(double)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setMVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)updateWipeWithPercent:(double)arg1 solidVertexCount:(unsigned long long*)arg2 wipeVertexCount:(unsigned long long*)arg3;

@end
