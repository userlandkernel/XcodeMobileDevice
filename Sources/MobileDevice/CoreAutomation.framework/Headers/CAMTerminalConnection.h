//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutomation/CAMCommandLineInterfacing-Protocol.h>

@class NSCharacterSet, NSString;

@interface CAMTerminalConnection : NSObject <CAMCommandLineInterfacing>
{
    NSString *prompt;
    BOOL stripPrompt;
    NSCharacterSet *newLineCharacterSet;
}

- (void).cxx_destruct;
- (void)connect;
- (void)disconnect;
- (id)init;
- (void)loginAs:(id)arg1 withPassword:(id)arg2;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt;
@property(readonly) unsigned char readByte;
- (id)readUntil:(id)arg1;
- (id)runCommand:(id)arg1 andWaitForResult:(BOOL)arg2;
@property(nonatomic) BOOL stripPrompt; // @synthesize stripPrompt;
- (void)write:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

