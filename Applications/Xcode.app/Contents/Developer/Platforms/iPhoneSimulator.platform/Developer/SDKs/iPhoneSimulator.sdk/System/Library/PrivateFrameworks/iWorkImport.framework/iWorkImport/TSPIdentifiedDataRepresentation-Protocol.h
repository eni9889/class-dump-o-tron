//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SFUDataRepresentation;

@protocol TSPIdentifiedDataRepresentation <NSObject>
- (_Bool)isLoaded;
- (_Bool)setDataRepresentation:(SFUDataRepresentation *)arg1 shouldCopy:(_Bool)arg2 error:(id *)arg3;
- (long long)identifier;

@optional
- (_Bool)fromExternalReference;
- (void)setRelativeDataPath:(NSString *)arg1;
- (void)setFileStateIdentifier:(NSString *)arg1;
@end
