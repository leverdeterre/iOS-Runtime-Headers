/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    struct { 
        unsigned int typeCode : 1; 
    NSString *_extensionName;
    } _has;
    unsigned int _typeCode;
}

@property(retain) NSString * extensionName;
@property(readonly) bool hasExtensionName;
@property bool hasTypeCode;
@property unsigned int typeCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extensionName;
- (bool)hasExtensionName;
- (bool)hasTypeCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExtensionName:(id)arg1;
- (void)setHasTypeCode:(bool)arg1;
- (void)setTypeCode:(unsigned int)arg1;
- (unsigned int)typeCode;
- (void)writeTo:(id)arg1;

@end
