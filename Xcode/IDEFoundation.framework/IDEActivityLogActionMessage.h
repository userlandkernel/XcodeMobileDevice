//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@class NSString;

@interface IDEActivityLogActionMessage : IDEActivityLogMessage
{
    NSString *_actionIdentifier;
}

- (void).cxx_destruct;
@property(copy) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (id)initWithAction:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 location:(id)arg4;

@end

