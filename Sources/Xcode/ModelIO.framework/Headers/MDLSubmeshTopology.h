//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MDLMeshBuffer;

@interface MDLSubmeshTopology : NSObject
{
    id <MDLMeshBuffer> _faceTopology;
    unsigned long long _faceCount;
    id <MDLMeshBuffer> _vertexCreaseIndices;
    id <MDLMeshBuffer> _vertexCreases;
    unsigned long long _vertexCreaseCount;
    id <MDLMeshBuffer> _edgeCreaseIndices;
    id <MDLMeshBuffer> _edgeCreases;
    unsigned long long _edgeCreaseCount;
    id <MDLMeshBuffer> _holes;
    unsigned long long _holeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long edgeCreaseCount; // @synthesize edgeCreaseCount=_edgeCreaseCount;
@property(retain, nonatomic) id <MDLMeshBuffer> edgeCreaseIndices; // @synthesize edgeCreaseIndices=_edgeCreaseIndices;
@property(retain, nonatomic) id <MDLMeshBuffer> edgeCreases; // @synthesize edgeCreases=_edgeCreases;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(retain, nonatomic) id <MDLMeshBuffer> faceTopology; // @synthesize faceTopology=_faceTopology;
@property(nonatomic) unsigned long long holeCount; // @synthesize holeCount=_holeCount;
@property(retain, nonatomic) id <MDLMeshBuffer> holes; // @synthesize holes=_holes;
- (id)initWithSubmesh:(id)arg1;
@property(nonatomic) unsigned long long vertexCreaseCount; // @synthesize vertexCreaseCount=_vertexCreaseCount;
@property(retain, nonatomic) id <MDLMeshBuffer> vertexCreaseIndices; // @synthesize vertexCreaseIndices=_vertexCreaseIndices;
@property(retain, nonatomic) id <MDLMeshBuffer> vertexCreases; // @synthesize vertexCreases=_vertexCreases;

@end
