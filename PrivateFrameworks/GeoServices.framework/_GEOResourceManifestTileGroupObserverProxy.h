/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
    NSHashTable *_observers;
    NSLock *_observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property NSObject<OS_dispatch_queue> * queue;

- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)forEachObserver:(id)arg1 finished:(id)arg2;
- (id)init;
- (unsigned long long)observersCount;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setQueue:(id)arg1;

@end
