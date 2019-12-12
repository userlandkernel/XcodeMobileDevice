//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IDESourceControlRevision : NSObject
{
    NSString *_revision;
    NSString *_author;
    NSDate *_date;
    NSString *_message;
    BOOL _isHEAD;
    BOOL _isBASE;
    BOOL _isCurrent;
    NSString *_displayRevision;
    NSString *_filePath;
    NSString *_currentFilePath;
    NSString *_subtext;
}

+ (id)inMemoryRevision;
+ (id)keyPathsForValuesAffectingLongRevisionString;
+ (id)localRevision;
- (void).cxx_destruct;
@property(readonly) NSString *author; // @synthesize author=_author;
@property(readonly) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (id)description;
@property(readonly) NSString *displayRevision; // @synthesize displayRevision=_displayRevision;
@property(readonly) NSString *filePath; // @synthesize filePath=_filePath;
- (unsigned long long)hash;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithRevision:(id)arg1 displayRevision:(id)arg2 author:(id)arg3 date:(id)arg4 message:(id)arg5;
- (id)initWithRevision:(id)arg1 displayRevision:(id)arg2 author:(id)arg3 date:(id)arg4 message:(id)arg5 filePath:(id)arg6 currentFilePath:(id)arg7 isBASE:(BOOL)arg8 isHEAD:(BOOL)arg9 isCurrent:(BOOL)arg10;
@property BOOL isBASE; // @synthesize isBASE=_isBASE;
@property BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
- (BOOL)isEqual:(id)arg1;
@property BOOL isHEAD; // @synthesize isHEAD=_isHEAD;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSString *revision; // @synthesize revision=_revision;
@property(retain) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly) NSString *shortRevisionString;

@end

