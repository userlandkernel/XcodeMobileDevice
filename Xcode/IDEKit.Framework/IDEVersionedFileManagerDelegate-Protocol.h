//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTFilePath, NSArray;

@protocol IDEVersionedFileManagerDelegate
- (BOOL)canMoveItemsAtFilePaths:(NSArray *)arg1 toFilePaths:(NSArray *)arg2 completionBlockDispatchQueue:(id *)arg3 completionBlock:(CDUnknownBlockType *)arg4;
- (BOOL)canRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlockDispatchQueue:(id *)arg2 completionBlock:(CDUnknownBlockType *)arg3;
- (void)moveItemAtFilePathToTrash:(DVTFilePath *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)willRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlock:(void (^)(BOOL))arg2;
@end

