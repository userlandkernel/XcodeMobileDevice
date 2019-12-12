//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTDKCrashLogController : NSObject
{
    NSString *_statusMessage;
    NSString *_symbolicationStatus;
}

+ (id)controller;
+ (id)keyPathsForValuesAffectingStatusMessage;
- (void).cxx_destruct;
- (Class)_database;
- (void)copyExternalCrashLog:(id)arg1;
- (id)crashLogRootDirectory;
- (id)crashLogs;
@property(readonly) _Bool enableCrashLogSupport;
- (void)enqueueLogForSymbolication:(id)arg1;
- (id)legacyRootDirectory;
@property(copy) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(copy) NSString *symbolicationStatus; // @synthesize symbolicationStatus=_symbolicationStatus;
- (_Bool)shouldAcceptDroppedCrashLogAtPath:(id)arg1;

@end

