/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCDownloadContext, NSProgress, NSString;

@interface BRCDownloadVersionOperation : BRCOperation <BRCOperationSubclass> {
    BRCDownloadContext *_context;
    id _downloadCompletionBlock;
    NSString *_etag;
    NSProgress *_progress;
    bool_isConflict;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id downloadCompletionBlock;
@property(readonly) unsigned long long hash;
@property(retain) NSProgress * progress;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_putRecordInGenstore:(id)arg1 stageURL:(id)arg2 statInfo:(id)arg3 version:(id)arg4 completionHandler:(id)arg5;
- (id)_stageFileWithRecord:(id)arg1 error:(id*)arg2;
- (id)_stagePackageWithRecord:(id)arg1 error:(id*)arg2;
- (id)_stageRecord:(id)arg1 error:(id*)arg2;
- (id)downloadCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDownloadContext:(id)arg1 etag:(id)arg2 isConflict:(bool)arg3;
- (void)main;
- (id)progress;
- (void)setDownloadCompletionBlock:(id)arg1;
- (void)setProgress:(id)arg1;

@end
