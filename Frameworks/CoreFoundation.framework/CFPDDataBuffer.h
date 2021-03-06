/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDDataBuffer : NSObject {
}

+ (id)newBufferFromCFData:(struct __CFData { }*)arg1;
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(bool)arg2;
+ (id)newBufferFromPropertyList:(void*)arg1;

- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (void*)copyPropertyListWithMutability:(unsigned long long)arg1;
- (id)copyXPCData;
- (unsigned long long)length;

@end
