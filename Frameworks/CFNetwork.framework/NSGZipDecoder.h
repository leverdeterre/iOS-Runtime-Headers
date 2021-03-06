/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    NSString *_filename;
    unsigned long long _modificationTime;
    } _stream;
    bool_decodedHeader;
    bool_finishedInflating;
    bool_pad;
    bool_streamInitialized;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)MIMEType;
+ (bool)canDecodeDownloadHeaderData:(id)arg1;
+ (bool)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4;

- (id).cxx_construct;
- (void)dealloc;
- (id)decodeData:(id)arg1;
- (bool)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)arg1;
- (void)finalize;
- (bool)finishDownloadDecoding;
- (id)init;
- (bool)isFinishedDecoding;

@end
