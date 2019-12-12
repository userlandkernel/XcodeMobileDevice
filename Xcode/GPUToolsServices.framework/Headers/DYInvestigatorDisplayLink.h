//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>

@interface DYInvestigatorDisplayLink : NSObject <NSCopying>
{
    BOOL _running;
    unsigned int _identifier;
    unsigned int _interval;
    unsigned long long _timeStamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned int)arg1 withRunning:(BOOL)arg2 withInterval:(unsigned int)arg3;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

@end
