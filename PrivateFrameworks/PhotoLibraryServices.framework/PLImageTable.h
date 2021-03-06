/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSMutableArray, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString;

@interface PLImageTable : NSObject <PLThumbPersistenceManager> {
    struct CGSize { 
        double width; 
        double height; 
    NSMutableArray *_allSegments;
    long long _entryCount;
    int _entryLength;
    int _fid;
    long long _fileLength;
    int _format;
    int _imageLength;
    int _imageRowBytes;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_preheatIndexIsolation;
    NSMutableIndexSet *_preheatIndexes;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    unsigned long long _segmentCount;
    unsigned long long _segmentLength;
    } _thumbnailSize;
    bool_dying;
    bool_readOnly;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) int imageFormat;
@property(readonly) int imageHeight;
@property(readonly) int imageLength;
@property(readonly) int imageRowBytes;
@property(readonly) struct CGSize { double x1; double x2; } imageSize;
@property(readonly) int imageWidth;
@property(readonly) bool isReadOnly;
@property(readonly) NSString * path;
@property(readonly) NSDictionary * photoUUIDToIndexMap;
@property(readonly) Class superclass;

+ (void)releaseSegmentCache;
+ (void)writeImage:(id)arg1 toData:(id*)arg2 thumbnailFormat:(int)arg3 videoDuration:(id)arg4 width:(int*)arg5 height:(int*)arg6 bytesPerRow:(int*)arg7 dataWidth:(int*)arg8 dataHeight:(int*)arg9 dataOffset:(int*)arg10;

- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (void)_adviseWillNeedEntriesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (id)_debugDescription;
- (void)_doPreheatWithCompletionHandler:(id)arg1;
- (int)_fileDescriptor;
- (void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2;
- (void)_flushEntryAtAddress:(void*)arg1;
- (id)_getAndClearPreheatIndexes;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (unsigned long long)_segmentLength;
- (void)_setEntryCount:(long long)arg1;
- (void)_updateSegmentCount;
- (void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (void)dealloc;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (long long)entryCount;
- (void)finishUnicornEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 asset:(id)arg4;
- (id)imageDataAtIndex:(unsigned long long)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (int)imageFormat;
- (int)imageHeight;
- (int)imageLength;
- (int)imageRowBytes;
- (struct CGSize { double x1; double x2; })imageSize;
- (int)imageWidth;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(bool)arg3;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (bool)isReadOnly;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (id)path;
- (id)photoUUIDToIndexMap;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (void)preheatImageDataAtIndex:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(id)arg2;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (bool)usesThumbIdentifiers;

@end
