//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface IDEDistributionIssue : NSObject
{
    int _severity;
    NSError *_error;
}

+ (id)issuesFromErrors:(id)arg1 withSeverity:(int)arg2;
+ (id)issuesFromITunesResponse:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSError *error; // @synthesize error=_error;
- (id)initWithSeverity:(int)arg1 error:(id)arg2;
@property(readonly) int severity; // @synthesize severity=_severity;

@end

