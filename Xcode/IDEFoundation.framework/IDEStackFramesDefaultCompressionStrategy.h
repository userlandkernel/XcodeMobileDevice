//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEStackFramesDefaultCompressionStrategy : NSObject
{
}

+ (id)sharedInstance;
- (id)_initInternal;
- (id)compressStackFrames:(id)arg1 level:(unsigned long long)arg2;
- (unsigned long long)defaultCompressionLevel;
- (id)init;
- (unsigned long long)maxCompressionLevel;

@end

