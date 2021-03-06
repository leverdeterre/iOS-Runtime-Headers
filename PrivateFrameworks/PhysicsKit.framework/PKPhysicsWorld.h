/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <PKPhysicsContactDelegate>, NSMutableArray, NSMutableDictionary;

@interface PKPhysicsWorld : NSObject <NSCoding> {
    struct b2Vec2 { 
        float x; 
        float y; 
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    struct PKDebugDrawPacket { 
        struct vector<PKPoint, std::__1::allocator<PKPoint> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _linePoints; 
        struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _colors; 
     /* Encoded args for previous method: 32@0:816 */
    double _accumulatedDt;
    NSMutableArray *_bodies;
    } _contactListener;
    } _gravity;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    float _speed;
    struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; boolx9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; boolx13; boolx14; boolx15; boolx16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; } *_world;
    bool_doSleep;
    } drawPacket;
}

@property(readonly) struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; /* Warning: unhandled struct encoding: '{unordered_set<int' */ struct x_3_1_4; void*x_3_1_5; void*x_3_1_6; void*x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; void*x_3_1_11; void*x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; in void*x_3_1_16; void*x_3_1_17; void*x_3_1_18; void*x_3_1_19; void*x_3_1_20; void*x_3_1_21; void*x_3_1_22; void*x_3_1_23; void*x_3_1_24; void*x_3_1_25; void*x_3_1_26; void*x_3_1_27; void*x_3_1_28; void*x_3_1_29; void*x_3_1_30; void*x_3_1_31; short x_3_1_32; void*x_3_1_33; void*x_3_1_34; void*x_3_1_35; const void*x_3_1_36; void*x_3_1_37; void*x_3_1_38; BOOL x_3_1_39; void*x_3_1_40; void*x_3_1_41; void*x_3_1_42; void*x_3_1_43; void*x_3_1_44; unsigned int x_3_1_45/* : ? */; void*x_3_1_46; void*x_3_1_47; void*x_3_1_48; void*x_3_1_49; void*x_3_1_50; const void*x_3_1_51; void*x_3_1_52; void*x_3_1_53; void*x_3_1_54; void*x_3_1_55; inout void*x_3_1_56; out void*x_3_1_57; double x_3_1_58; void*x_3_1_59; void*x_3_1_60; void*x_3_1_61; void*x_3_1_62; void*x_3_1_63; struct x_3_1_64; void*x_3_1_65; } x3; void*x4; void*x5; void*x6; char *x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; int x27; void*x28; in void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; int x52; void*x53; in void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; int x77; void*x78; in void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; }* _world; /* unknown property attribute:  std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}} */
@property(readonly) struct * aether; /* unknown property attribute:  std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}}}} */
@property(retain) NSMutableArray * _bodies;
@property bool _doSleep;
@property struct b2Vec2 { float x1; float x2; } _gravity;
@property <PKPhysicsContactDelegate> * contactDelegate;
@property struct CGVector { double x1; double x2; } gravity;
@property double speed;
@property double velocityThreshold;

+ (id)world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)_runBlockOutsideOfTimeStep:(id)arg1;
- (struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; boolx9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; boolx13; boolx14; boolx15; boolx16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; }*)_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
- (struct PKCAether { struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_1_1_1; struct weak_ptr<PKCField> {} *x_1_1_2; struct __compressed_pair<std::__1::weak_ptr<PKCField> *, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_3_2_1; } x_1_1_3; } x1; }*)aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)collisionDelegate;
- (id)contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2 showsPhysics:(bool)arg3 showsOutlineInterior:(bool)arg4 showsFields:(bool)arg5;
- (const struct PKDebugDrawPacket { struct vector<PKPoint, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_1_1_1; struct { /* ? */ } *x_1_1_2; struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_3_2_1; } x_1_1_3; } x1; struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; }*)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (struct CGVector { double x1; double x2; })evalForce:(unsigned int)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGVector { double x1; double x2; })gravity;
- (bool)hasBodies;
- (bool)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { double x1; double x2; })sampleFields:(struct CGPoint { double x1; double x2; })arg1;
- (id)sampleFields:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize { double x1; double x2; })arg3;
- (/* Warning: Unrecognized filer type: '3' using 'void*' */ void*)sampleFieldsAt:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
- (void)setCollisionDelegate:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { double x1; double x2; })arg1;
- (void)setSpeed:(double)arg1;
- (void)setVelocityThreshold:(double)arg1;
- (void)set_bodies:(id)arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (double)speed;
- (bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (double)velocityThreshold;

@end
