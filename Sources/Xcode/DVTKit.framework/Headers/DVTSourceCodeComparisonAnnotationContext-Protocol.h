//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTDiffDescriptor, DVTDiffSession, NSURL;

@protocol DVTSourceCodeComparisonAnnotationContext <NSObject>
@property(readonly) int dataSourceType;
@property(readonly) __weak DVTDiffDescriptor *diffDescriptor;
@property(readonly) __weak DVTDiffSession *diffSession;
@property(readonly) NSURL *documentURL;
@end

