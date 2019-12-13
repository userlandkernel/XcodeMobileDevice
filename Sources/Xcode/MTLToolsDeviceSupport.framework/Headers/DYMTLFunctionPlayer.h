//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYFunctionPlayer.h>

@protocol MTLDevice;

@interface DYMTLFunctionPlayer : DYFunctionPlayer
{
    unordered_map_d8b431c8 _objectMap;
    struct set<id, std::__1::less<id>, std::__1::allocator<id>> _commandQueueSet;
    id <MTLDevice> _device;
}

+ (void *)fragmentBytesKeyAtIndex:(unsigned long long)arg1;
+ (void *)vertexBytesKeyAtIndex:(unsigned long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createPrivateBufferForFunctionWithDevice:(id)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4;
- (id)_getDeviceWithName:(id)arg1;
- (void)_saveBytes;
- (id)commandQueue;
- (void)dealloc;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id)deviceForID:(unsigned long long)arg1 withDeviceName:(id)arg2;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (id)initWithCaptureStore:(id)arg1;
- (BOOL)isFrameBoundary;
- (id)objectForKey:(unsigned long long)arg1;
- (unordered_map_d8b431c8 *)objectMap;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;

@end
