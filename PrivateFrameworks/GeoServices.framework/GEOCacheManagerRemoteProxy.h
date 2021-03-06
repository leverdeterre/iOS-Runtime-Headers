/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (id)init;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)versionsForDomains:(id)arg1 handler:(id)arg2;

@end
