//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IDEGroupedSegmentedControlGroup : NSObject <NSCopying>
{
    NSString *_identifier;
    NSArray *_items;
    unsigned long long _trackingMode;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 items:(id)arg2 trackingMode:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGroupedSegmentedControlGroup:(id)arg1;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) unsigned long long trackingMode; // @synthesize trackingMode=_trackingMode;

@end

