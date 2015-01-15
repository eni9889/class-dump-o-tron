//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTileSource.h>

__attribute__((visibility("hidden")))
@interface VKAttributesTileSource : VKVectorTileSource
{
}

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (long long)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;

@end
