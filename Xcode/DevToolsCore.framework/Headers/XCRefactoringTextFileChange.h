//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCRefactoringFileChange.h>

@class NSString;

@interface XCRefactoringTextFileChange : XCRefactoringFileChange
{
    NSString *_replacementString;
}

- (void)dealloc;
- (id)description;
- (id)initWithTextFileChangeSet:(id)arg1 textFileLocation:(id)arg2 replacementString:(id)arg3;
- (BOOL)isEqualToFileChange:(id)arg1;
- (struct _XCRefactoringLineInfo)lineInfo;
- (id)replacementString;

@end
