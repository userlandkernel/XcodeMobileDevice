//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTDragManager : NSObject
{
}

+ (BOOL)isUserDragging;
+ (id)sharedInstance;
- (unsigned long long)dragImage:(id)arg1 at:(struct CGPoint)arg2 mouseDownEvent:(id)arg3 pasteboard:(id)arg4 allowedOperations:(unsigned long long)arg5 source:(id)arg6 slideBack:(BOOL)arg7 draggingSourceContext:(id)arg8;
- (unsigned long long)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 mouseDownEvent:(id)arg4 mouseDraggedEvent:(id)arg5 pasteboard:(id)arg6 allowedOperations:(unsigned long long)arg7 source:(id)arg8 slideBack:(BOOL)arg9 draggingSourceContext:(id)arg10;

@end

