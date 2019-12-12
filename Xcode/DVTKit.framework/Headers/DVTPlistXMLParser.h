//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSXMLParserDelegate-Protocol.h>

@class DVTPlistNode, NSString, NSXMLParser;

@interface DVTPlistXMLParser : NSObject <NSXMLParserDelegate>
{
    DVTPlistNode *rootNode;
    DVTPlistNode *currentNode;
    NSString *currentKey;
    NSString *currentString;
    NSXMLParser *parser;
    BOOL interestedInCharacters;
    NSString *_errorFoundByDelegate;
}

- (void).cxx_destruct;
- (void)addToParent:(id)arg1;
- (id)error;
- (id)errorFoundByDelegate;
- (id)initWithData:(id)arg1;
- (id)parse;
- (void)parseError:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

