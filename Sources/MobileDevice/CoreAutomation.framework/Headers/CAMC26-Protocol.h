//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnBool, CAMReturnString, NSData, NSNumber, NSString;

@protocol CAMC26

@optional
- (CAMReturnString *)openStreamWithType:(NSNumber *)arg1;
- (CAMReturnArray *)receiveDataFromStream:(NSString *)arg1;
- (CAMReturnBool *)sendData:(NSData *)arg1 toStream:(NSString *)arg2;
- (CAMReturnBool *)waitForAuthenticationCompletion:(NSNumber *)arg1;
@end

