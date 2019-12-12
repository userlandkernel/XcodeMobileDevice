//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface GKBehavior : NSObject <NSFastEnumeration, NSCopying>
{
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}

+ (id)behaviorWithGoal:(id)arg1 weight:(float)arg2;
+ (id)behaviorWithGoals:(id)arg1;
+ (id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2;
+ (id)behaviorWithWeightedGoals:(id)arg1;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
-     // Error parsing type: 32@0:8d16@24, name: getTotalForce:agent:
@property(readonly) long long goalCount;
- (id)goals;
- (id)init;
- (id)initWithGoal:(id)arg1 weight:(float)arg2;
- (id)initWithGoals:(id)arg1;
- (id)initWithGoals:(id)arg1 andWeights:(id)arg2;
- (id)initWithWeightedGoals:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllGoals;
- (void)removeGoal:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setWeight:(float)arg1 forGoal:(id)arg2;
- (float)weightForGoal:(id)arg1;
- (id)weights;

@end
