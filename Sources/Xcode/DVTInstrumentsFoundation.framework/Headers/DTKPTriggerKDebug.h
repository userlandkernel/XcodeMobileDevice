//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPTrigger.h>

@class DTKPKDebugCodeSet;

@interface DTKPTriggerKDebug : DTKPTrigger
{
    int _filterMode;
    DTKPKDebugCodeSet *_codeSet;
}

- (void).cxx_destruct;
- (void)addCodeSet:(id)arg1;
- (void)clearCodeSet;
@property(readonly, retain, nonatomic) DTKPKDebugCodeSet *codeSet; // @synthesize codeSet=_codeSet;
- (void)enableClass:(unsigned char)arg1;
- (void)enableClass:(unsigned char)arg1 subclass:(unsigned char)arg2;
@property(nonatomic) int filterMode; // @synthesize filterMode=_filterMode;
- (id)initWithCounterAllocatorProvider:(id)arg1;
- (int)start:(id *)arg1;
- (int)stop:(id *)arg1;

@end
