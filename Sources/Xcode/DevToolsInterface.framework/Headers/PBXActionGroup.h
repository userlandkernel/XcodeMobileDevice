//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface PBXActionGroup : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_actions;
}

- (id)actions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initName:(id)arg1 actions:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;

@end
