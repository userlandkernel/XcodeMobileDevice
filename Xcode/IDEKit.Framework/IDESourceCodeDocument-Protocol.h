//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTTextDocumentLocation, DVTTextStorage, NSString;

@protocol IDESourceCodeDocument <NSObject>
- (struct _NSRange)characterRangeFromDocumentLocation:(DVTTextDocumentLocation *)arg1;
- (DVTTextDocumentLocation *)documentLocationFromCharacterRange:(struct _NSRange)arg1;
- (DVTTextDocumentLocation *)insertCharactersAfterLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
- (DVTTextDocumentLocation *)insertCharactersBeforeLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
- (DVTTextDocumentLocation *)replaceCharactersAtLocation:(DVTTextDocumentLocation *)arg1 withString:(NSString *)arg2;
@property(readonly) DVTTextStorage *textStorage;
@end

