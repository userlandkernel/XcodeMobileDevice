//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTTileView, DVTTileViewItem, NSEvent, NSString;

@protocol DVTTileViewDelegate <NSObject>
- (void)tileView:(DVTTileView *)arg1 didChangeContextClickedObjectFrom:(id)arg2;
- (NSString *)tileView:(DVTTileView *)arg1 typeCompletionStringForContentObject:(id)arg2;

@optional
- (void)tileView:(DVTTileView *)arg1 didProcessKeyEvent:(NSEvent *)arg2;
- (void)tileView:(DVTTileView *)arg1 didStopUsingTileViewItem:(DVTTileViewItem *)arg2;
- (NSString *)tileView:(DVTTileView *)arg1 titleForContentObject:(id)arg2;
- (void (^)(NSEvent *, BOOL))tileView:(DVTTileView *)arg1 willProcessClick:(NSEvent *)arg2;
- (void)tileView:(DVTTileView *)arg1 willProcessKeyEvent:(NSEvent *)arg2;
- (void)tileView:(DVTTileView *)arg1 willStartUsingTileViewItem:(DVTTileViewItem *)arg2;
- (void)userDidPressEscapeInTileView:(DVTTileView *)arg1;
- (void)userDidPressSpaceBarInTileView:(DVTTileView *)arg1;
@end

