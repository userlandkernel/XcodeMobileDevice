//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableData;

@interface DVTMessage : NSObject
{
    NSMutableData *_content;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
- (void)appendContentData:(id)arg1;
@property(copy) NSData *content;
- (id)contentAsPropertyListWithReadOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)setContentToPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

@end
