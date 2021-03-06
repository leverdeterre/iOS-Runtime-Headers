/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocation, NSArray, NSDate, NSString, NSURL, PHQuery;

@interface PHAssetCollection : PHCollection {
    unsigned long long _approximateCount;
    CLLocation *_approximateLocation;
    unsigned long long _approximatePhotosCount;
    unsigned long long _approximateVideosCount;
    long long _assetCollectionSubtype;
    long long _assetCollectionType;
    NSArray *_assets;
    NSDate *_endDate;
    NSURL *_groupURL;
    NSString *_importSessionID;
    NSArray *_localizedLocationNames;
    NSString *_localizedTitle;
    int _pendingItemsCount;
    int _pendingItemsType;
    int _plAlbumKind;
    PHQuery *_query;
    id _sortingComparator;
    NSDate *_startDate;
    NSString *_title;
    NSString *_transientIdentifier;
    bool_canContributeToCloudSharedAlbum;
    bool_canShowCloudComments;
    bool_hasUnseenContentBoolValue;
    bool_isCameraRoll;
    bool_isCloudSharedAlbum;
    bool_isLibrary;
    bool_isMultipleContributorCloudSharedAlbum;
    bool_isOwnedCloudSharedAlbum;
    bool_isPanoramasCollection;
    bool_isPendingPhotoStreamAlbum;
    bool_isPhotoStreamCollection;
    bool_isSmartCollection;
    bool_isStandInCollection;
    bool_isWallpaperCollection;
    bool_shouldDeleteWhenEmpty;
}

@property(getter=_canShowCloudComments,setter=_setCanShowCloudComments:) bool _canShowCloudComments;
@property(readonly) unsigned long long approximateCount;
@property(readonly) CLLocation * approximateLocation;
@property(readonly) unsigned long long approximatePhotosCount;
@property(readonly) unsigned long long approximateVideosCount;
@property(readonly) long long assetCollectionSubtype;
@property(readonly) long long assetCollectionType;
@property(readonly) NSArray * assets;
@property(readonly) bool canContainCustomKeyAssets;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool canShowAvalancheStacks;
@property(readonly) bool canShowComments;
@property(readonly) NSDate * endDate;
@property(readonly) unsigned long long estimatedAssetCount;
@property(readonly) NSURL * groupURL;
@property(readonly) bool hasUnseenContentBoolValue;
@property(readonly) NSString * importSessionID;
@property(readonly) bool isCameraRoll;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isLibrary;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isPanoramasCollection;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isPhotoStreamCollection;
@property(readonly) bool isSmartCollection;
@property(readonly) bool isStandInCollection;
@property(readonly) bool isWallpaperCollection;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) int pendingItemsCount;
@property(readonly) int pendingItemsType;
@property(readonly) int plAlbumKind;
@property(readonly) bool pu_prefersShowingBottomContent;
@property(readonly) PHQuery * query;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(copy,readonly) id sortingComparator;
@property(readonly) NSDate * startDate;
@property(readonly) NSString * title;
@property(readonly) NSString * transientIdentifier;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)fetchRecentlyAddedAlbumWithOptions:(id)arg1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;

- (void).cxx_destruct;
- (bool)_canShowCloudComments;
- (void)_setCanShowCloudComments:(bool)arg1;
- (unsigned long long)approximateCount;
- (id)approximateLocation;
- (unsigned long long)approximatePhotosCount;
- (unsigned long long)approximateVideosCount;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)assets;
- (bool)canContainAssets;
- (bool)canContainCustomKeyAssets;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (Class)changeRequestClass;
- (bool)collectionCanBePinned;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCameraRoll;
- (bool)isCloudSharedAlbum;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasCollection;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamCollection;
- (bool)isSmartCollection;
- (bool)isStandInCollection;
- (bool)isWallpaperCollection;
- (id)localizedLocationNames;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (id)localizedTitle;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (int)plAlbumKind;
- (id)pl_assetContainer;
- (bool)pl_isWallpaperAlbum;
- (bool)pu_prefersShowingBottomContent;
- (id)query;
- (bool)shouldDeleteWhenEmpty;
- (id)sortingComparator;
- (id)startDate;
- (id)title;
- (id)transientIdentifier;

@end
