//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DVT_VMULibraryLoadDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DVT__VMULibraryLoadObserver : NSObject
{
    id <DVT_VMULibraryLoadDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialNotificationsQueue;
    struct _CSTypeRef _symbolicator;
}

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 taskIsCorpse:(BOOL)arg2 delegate:(id)arg3;
- (void)stopObserving;

@end
