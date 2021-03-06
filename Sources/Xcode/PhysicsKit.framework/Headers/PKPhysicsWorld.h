//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCoding-Protocol.h>

@class NSMutableArray;
@protocol PKPhysicsContactDelegate;

@interface PKPhysicsWorld : NSObject <NSCoding>
{
    struct b2World *_world;
    struct b2Vec2 _gravity;
    _Bool _doSleep;
    double _accumulatedDt;
    struct PKContactListener _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    struct PKDebugDrawPacket drawPacket;
}

+ (id)world;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
@property(retain, nonatomic) NSMutableArray *_bodies;
@property(nonatomic) _Bool _doSleep;
@property(nonatomic) struct b2Vec2 _gravity;
- (void)_runBlockOutsideOfTimeStep:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct b2World *_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
@property(readonly, nonatomic) struct PKCAether *aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)collisionDelegate;
@property(nonatomic) id <PKPhysicsContactDelegate> contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4)arg2 showsPhysics:(_Bool)arg3 showsOutlineInterior:(_Bool)arg4 showsFields:(_Bool)arg5;
- (const struct PKDebugDrawPacket *)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGVector)evalForce:(unsigned int)arg1 point:(struct CGPoint)arg2;
@property(nonatomic) struct CGVector gravity;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector)sampleFields:(struct CGPoint)arg1;
- (id)sampleFields:(struct CGRect)arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize)arg3;
-     // Error parsing type: 32@0:816, name: sampleFieldsAt:
- (void)setCollisionDelegate:(id)arg1;
@property(nonatomic) double speed;
@property(nonatomic) double velocityThreshold;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;

@end

