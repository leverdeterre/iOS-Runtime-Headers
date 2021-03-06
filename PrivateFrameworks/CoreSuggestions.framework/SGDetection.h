/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGDetection : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSString *_context;
    NSString *_extraction;
    NSString *_label;
    } _match;
    unsigned int _type;
    bool_hasPhoneLabel;
}

@property(readonly) NSString * context;
@property(readonly) NSString * extraction;
@property(readonly) bool hasPhoneLabel;
@property(readonly) NSString * label;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } match;
@property(readonly) unsigned int type;

+ (id)detectionWithType:(unsigned int)arg1 text:(id)arg2 matchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(bool)arg6;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)extraction;
- (bool)hasPhoneLabel;
- (id)initWithType:(unsigned int)arg1 extraction:(id)arg2 context:(id)arg3 label:(id)arg4 hasPhoneLabel:(bool)arg5 match:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)label;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })match;
- (unsigned int)type;

@end
