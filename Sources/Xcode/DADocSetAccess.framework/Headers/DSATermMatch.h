//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DSATermMatch : NSObject
{
}

+ (id)termMatchForTermID:(unsigned int)arg1 withBaseScore:(float)arg2;
+ (id)termMatchForTermMatches:(id)arg1;
- (unsigned long long)count;
- (float)scoreForTermID:(unsigned int)arg1;
- (float *)scores;
- (unsigned int *)termIDs;

@end

