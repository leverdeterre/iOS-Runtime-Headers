/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary;

@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary *_kvToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableArray *_peerSnapshots;
    bool_needSort;
}

- (void)addSnapshot:(id)arg1;
- (id)allPeerIDs;
- (bool)calculateSnapshotDiffsWithError:(id*)arg1;
- (void)dealloc;
- (id)init;
- (id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2;
- (id)snapshotForKnowledgeVector:(id)arg1;
- (id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2;

@end
