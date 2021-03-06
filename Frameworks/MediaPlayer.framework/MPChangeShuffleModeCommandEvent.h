/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {
    unsigned long long _shuffleType;
}

@property(readonly) unsigned long long shuffleType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (unsigned long long)shuffleType;

@end
