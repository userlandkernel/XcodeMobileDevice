//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TSKeyValueAccessorMethodDescriptor : NSObject
{
    NSString *_methodName;
    int _keyStyle;
    unsigned long long _indexOfKey;
}

+ (void)initialize;
+ (id)keyValueAccessorMethodDescriptorWithMethodName:(id)arg1 keyStyle:(int)arg2 indexOfKey:(unsigned long long)arg3;
- (void)dealloc;
- (unsigned long long)indexOfKey;
- (id)initWithMethodName:(id)arg1 keyStyle:(int)arg2 indexOfKey:(unsigned long long)arg3;
- (int)keyStyle;
- (id)methodName;

@end

