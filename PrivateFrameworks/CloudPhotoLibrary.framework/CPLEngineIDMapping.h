/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

- (bool)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(bool)arg3 error:(id*)arg4;
- (id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (bool)hasPendingIdentifiers;
- (id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (bool)markAllPendingIdentifiersAsFinalWithError:(id*)arg1;
- (bool)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetAllFinalCloudIdentifiersWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;
- (bool)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3;

@end
