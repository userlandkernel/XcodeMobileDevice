//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, XCRefactoringParser;

@interface XCRefactoringMainThreadArguments : NSObject
{
    NSDictionary *_initialInput;
    XCRefactoringParser *_parser;
    NSDictionary *_userInput;
}

- (void)dealloc;
- (id)filePath;
- (id)initWithInitialInput:(id)arg1 parser:(id)arg2;
- (struct _XCRefactoringLineInfo)lineInfo;
- (id)parser;
- (id)project;
- (id)selectionSymbolInfo;
- (void)setUserInput:(id)arg1;
- (id)userInput;

@end
