//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface XCSUIIntegrationCommitsDocumentLocation : DVTDocumentLocation
{
    NSString *_commitsFilePath;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *commitsFilePath; // @synthesize commitsFilePath=_commitsFilePath;
- (unsigned long long)hash;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 filePath:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

