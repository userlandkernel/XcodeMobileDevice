//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTAnalyticsServiceOption : NSObject
{
    NSString *_name;
    NSString *_value;
}

+ (id)dictionaryFromOptions:(id)arg1;
+ (id)optionWithName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *value; // @synthesize value=_value;

@end
