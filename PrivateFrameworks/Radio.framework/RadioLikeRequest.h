/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioStation, SSURLConnectionRequest;

@interface RadioLikeRequest : RadioRequest {
    long long _itemID;
    int _likeStatus;
    SSURLConnectionRequest *_request;
    int _seedType;
    RadioStation *_station;
    bool_isSeed;
}

@property bool isSeed;
@property int likeStatus;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3;
- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (id)initWithTrackID:(id)arg1 station:(id)arg2;
- (bool)isSeed;
- (int)likeStatus;
- (void)setIsSeed:(bool)arg1;
- (void)setLikeStatus:(int)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithLikeCompletionHandler:(id)arg1;

@end
