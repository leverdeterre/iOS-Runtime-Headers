/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TNUIStateDelegate>, NSArray, NSSet, TNChartSelection, TNSheetSelection, TSTTableSelection, TSURetainedPointerKeyDictionary;

@interface TNUIState : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolmInspectorPaneVisible;
    boolmRemovedAllQuickCalcFunctions;
    boolmShowCanvasGuides;
    boolmShowsComments;
    TNChartSelection *mChartSelection;
    <TNUIStateDelegate> *mDelegate;
    } mDesktopScreenSize;
    } mDesktopWindowFrame;
    long long mDocumentMode;
    TSURetainedPointerKeyDictionary *mEditModeSheetUIStates;
    int mInspectorPaneViewMode;
    NSSet *mSelectedInfos;
    NSArray *mSelectedQuickCalcFunctions;
    TNSheetSelection *mSheetSelection;
    TSURetainedPointerKeyDictionary *mSheetUIStates;
    int mTableEditingMode;
    TSTTableSelection *mTableSelection;
}

@property(retain) TNChartSelection * chartSelection;
@property <TNUIStateDelegate> * delegate;
@property struct CGSize { double x1; double x2; } desktopScreenSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } desktopWindowFrame;
@property long long documentMode;
@property unsigned char formFocusedFieldIndex;
@property unsigned short formFocusedRecordIndex;
@property(readonly) bool hasPreviousVisibleRect;
@property(readonly) bool hasVisibleRect;
@property int inspectorPaneViewMode;
@property(getter=isInspectorPaneVisible) bool inspectorPaneVisible;
@property(readonly) struct CGPoint { double x1; double x2; } previousScrollPosition;
@property(readonly) float previousViewScale;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousVisibleRect;
@property bool removedAllQuickCalcFunctions;
@property(readonly) struct CGPoint { double x1; double x2; } scrollPosition;
@property(retain) NSSet * selectedInfos;
@property(copy) NSArray * selectedQuickCalcFunctions;
@property(retain) TNSheetSelection * sheetSelection;
@property bool showCanvasGuides;
@property bool showsComments;
@property int tableEditingMode;
@property(retain) TSTTableSelection * tableSelection;
@property(readonly) float viewScale;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (id).cxx_construct;
- (id)archivedUIStateInContext:(id)arg1;
- (id)chartSelection;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct CGSize { double x1; double x2; })desktopScreenSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desktopWindowFrame;
- (long long)documentMode;
- (unsigned char)formFocusedFieldIndex;
- (unsigned short)formFocusedRecordIndex;
- (bool)hasPreviousVisibleRect;
- (bool)hasVisibleRect;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; unsigned int x6; struct SelectionArchive {} *x7; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; int x9; int x10; unsigned int x11; unsigned int x12; struct ChartSelectionArchive {} *x13; struct Reference {} *x14; int x15; boolx16; boolx17; boolx18; boolx19; struct RepeatedField<unsigned int> { unsigned int *x_20_1_1; int x_20_1_2; int x_20_1_3; } x20; struct Point {} *x21; struct Size {} *x22; struct Size {} *x23; boolx24; int x25; unsigned int x26[1]; }*)arg1 unarchiver:(id)arg2;
- (int)inspectorPaneViewMode;
- (bool)isEqual:(id)arg1;
- (bool)isInspectorPaneVisible;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)p_defaultViewScale;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (struct CGPoint { double x1; double x2; })previousScrollPosition;
- (float)previousViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousVisibleRect;
- (void)removeUIStateForSheet:(id)arg1;
- (bool)removedAllQuickCalcFunctions;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; unsigned int x6; struct SelectionArchive {} *x7; struct RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; int x9; int x10; unsigned int x11; unsigned int x12; struct ChartSelectionArchive {} *x13; struct Reference {} *x14; int x15; boolx16; boolx17; boolx18; boolx19; struct RepeatedField<unsigned int> { unsigned int *x_20_1_1; int x_20_1_2; int x_20_1_3; } x20; struct Point {} *x21; struct Size {} *x22; struct Size {} *x23; boolx24; int x25; unsigned int x26[1]; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (struct CGPoint { double x1; double x2; })scrollPosition;
- (id)selectedInfos;
- (id)selectedQuickCalcFunctions;
- (void)setChartSelection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesktopScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDesktopWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentMode:(long long)arg1;
- (void)setFormFocusedFieldIndex:(unsigned char)arg1;
- (void)setFormFocusedRecordIndex:(unsigned short)arg1;
- (void)setInspectorPaneViewMode:(int)arg1;
- (void)setInspectorPaneVisible:(bool)arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemovedAllQuickCalcFunctions:(bool)arg1;
- (void)setSelectedInfos:(id)arg1;
- (void)setSelectedQuickCalcFunctions:(id)arg1;
- (void)setSheetSelection:(id)arg1;
- (void)setShowCanvasGuides:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setTableEditingMode:(int)arg1;
- (void)setTableSelection:(id)arg1;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSheet:(id)arg2;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sheetSelection;
- (bool)showCanvasGuides;
- (bool)showsComments;
- (int)tableEditingMode;
- (id)tableSelection;
- (id)uiStateForSheet:(id)arg1;
- (float)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
