//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDraggingSession;

@protocol NSDraggingSource <NSObject>
- (unsigned long long)draggingSession:(NSDraggingSession *)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;

@optional
- (void)draggingSession:(NSDraggingSession *)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(NSDraggingSession *)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(NSDraggingSession *)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (BOOL)ignoreModifierKeysForDraggingSession:(NSDraggingSession *)arg1;
@end

